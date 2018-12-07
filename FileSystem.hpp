//
// Created by Clayton Wong on 2018-12-07
//

#pragma once


#include "CommandLineInterface.hpp"
#include <boost/filesystem.hpp>
#include <string>
#include <exception>
#include <algorithm>


namespace relative_symbolic_links
{


    namespace fs = boost::filesystem;
    namespace rc = relative_symbolic_links::common;


    int updateSymbolicLinks( const CommandLineInput& input ) noexcept
    {
        try
        {
            for( const auto &file: fs::recursive_directory_iterator( input.toolchain ) )
            {
                if( ! fs::is_symlink( file.path() ) )
                {
                    continue;
                }

                auto link = file.path().string();
                auto real = fs::read_symlink( file.path() ).string();

                if( real.front() != rc::DirectorySeparator()  ||  link.find( input.base ) == std::string::npos
                                                              ||  real.find( input.base ) == std::string::npos )
                {
                    continue; // Absolute path starts with a DIRECTORY_SEPARATOR.  Also both the symlink and real file path
                              // must contain the base directory ( which is used for relative directory update performed below )
                }

                //
                // relLink is used to count the amount of directories away the symbolic link is from the base directory
                // this is needed in order to count the directories to create a relative path with a "../" for each directory
                //
                auto relativeLink = link.substr( link.find( input.base ) + input.base.size() );
                auto folderCount = count_if( relativeLink.begin(), relativeLink.end(), []( const char c ){ return c == '/'; });

                //
                // create new path by appending relative symbolic link count of folders till the base folder is reached as "../"
                // and then appending the relative real file folder(s)+filename after those "../"s
                //
                std::string newReal;
                while( folderCount-- )
                {
                    newReal.append( rc::RelativeParentDirectory() );
                }
                auto relativeReal = real.substr( real.find( input.base ) + input.base.size() );
                newReal.append( relativeReal );

                std::cout << std::endl
                          << ( input.dryRun ? "Dry-run: " : "Updating: " ) << link << std::endl
                          << "    Before --> " << real << std::endl
                          << "    After  --> " << newReal << std::endl;

                if( ! input.dryRun )
                {
                    fs::remove(file.path());
                    fs::create_symlink(newReal, file.path());
                }

            } // for each file/directory within the toolchain directory
        }
        catch( std::exception& e )
        {
            std::cerr << "ERROR: " << e.what() << std::endl << std::endl;
            return rc::Failure();
        }

        return rc::Success();
    }


} // namespace relative_symbolic_links

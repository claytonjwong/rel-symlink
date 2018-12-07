//
// Created by Clayton Wong on 2018-12-07
//


#include "Common.hpp"
#include "CommandLineInterface.hpp"
#include "FileSystem.hpp"


using namespace relative_symbolic_links;
namespace rc = relative_symbolic_links::common;


int main( int argc, char *argv[] )
{
    CommandLineInput input;

    auto result = getCommandLineInput( argc, argv, &input );

    if( result == rc::Success() )
    {
        result = updateSymbolicLinks( input );
    }

    return result == rc::Success()  ||  result == rc::Help();
}

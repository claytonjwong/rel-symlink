//
// Created by Clayton Wong on 2018-12-07
//

#pragma once


#include <string>


namespace relative_symbolic_links
{
namespace common
{


    static const char DirectorySeparator()
    {
        static const char DIRECTORY_SEPARATOR{ '/' };
        return DIRECTORY_SEPARATOR;
    }


    static const std::string_view RelativeParentDirectory()
    {
        static const std::string_view RELATIVE_PARENT_DIRECTORY{ "../" };
        return RELATIVE_PARENT_DIRECTORY;
    }


    static const int Help()
    {
        static const int HELP{ 13 };
        return HELP;
    }


    static const int Success()
    {
        static const int SUCCESS{ 0 };
        return SUCCESS;
    }


    static const int Failure()
    {
        static const int FAILURE{ 1 };
        return FAILURE;
    }


} // namespace common
} // namespace relative_symbolic_links
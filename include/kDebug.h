#ifndef K_DEBUG_H
#define K_DEBUG_H
/**
 * @file kDebug.h
 * @author kward
 * @brief Module for debugging 
 * @version 0.1
 * @date 2021-11-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
#include <iostream>
#include <string>
#include <string.h>

using namespace std;

typedef const char* cstr;

//  Debug functions
namespace debug
{
    //  Print Start message
    inline void Start(cstr msg)
    {
        printf("\033[0;33m"); //  Sets text color to yellow
        printf("\n%s\n", msg);    //  Print message
        printf("\033[0;37m"); //  Set text color to white
    }

    //  Print success message
    inline void Success(cstr msg)
    {
        printf("\033[0;32m"); //  Sets text color to green
        printf("\n%s\n", msg);    //  Print message
        printf("\033[0;37m"); //  Set text color to white
    }

    //  Throw error message
    inline void Error(string loc, string msg, bool end)
    {
        printf("\033[0;31m"); //  Sets text color to red

        string errMsg = "Error in " + loc + ": " + msg + "\n";

        //  Check if program execution should be ended
        if (end)
        {
            //  Throw runtime error to stop execution
            throw std::runtime_error(errMsg);
        }
        else
        {
            //  Print normal error message
            printf("\n%s", errMsg.c_str());
        }

        printf("\033[0;37m"); //  Set text color to white
    }

    //  Print alert message
    inline void Alert(cstr msg)
    {
        printf("\033[0;95m"); //  Set text color to magenta

        //  Print message
        printf("\n%s\n", msg);

        printf("\033[0;37m"); //  Set text color to white
    }
}
#endif  //  End K_DEBUG_H
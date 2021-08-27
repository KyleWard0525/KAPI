#ifndef UTILS_H
#define UTILS_H

/**
 * Utility header for DLL
 * 
 * kward
 */
#include "lib.h"

//  Ensure cross-compatibility with C
#ifdef __cplusplus
    extern "C" {
#endif

//  Include in DLL build
#ifdef BUILD_DLL
    #define KWARD_DLL __declspec(dllexport)
#else
    #define KWARD_DLL __declspec(dllimport)
#endif

using namespace std;

// Main DLL namespace
namespace kward {

    //  Remove blanks from vector of strings
    vector<string> removeBlanks(vector<string> strVect)
    {
        //  Loop through vector
        for (string str : strVect)
        {
            if (str == " ")
            {
                str = "";
            }
        }
        return strVect;
    }

    //  Tokenize string with string delimeter
    vector<string> tokenize(string str, string delim)
    {
        vector<string> tokens; //  Line tokens
        size_t start = 0;      //  Start position
        size_t end;            //  End position

        //  Loop until delimeter is found or end of string
        while ((end = str.find(delim, start)) != string::npos)
        {
            //  Add token to vector
            string token = str.substr(start, end - start);
            tokens.push_back(token);

            start = end + delim.length();
        }

        return tokens;
    }
}

#ifdef __cplusplus
    }
#endif

#endif // End UTILS_H
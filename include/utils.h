#ifndef UTILS_H
#define UTILS_H

/**
 * Utility header for DLL
 * 
 * kward
 */
#include "lib.h"
#include "types.h"

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
using namespace kward_api::types;

// Main DLL namespace
namespace kward_api {

    KWARD_DLL vector<string> removeBlanks(vector<string> strVect);                    //  Remove blanks from vector of strings
    KWARD_DLL vector<string> tokenize(string str, string delim);                      //  Tokenize string with string delimeter
    KWARD_DLL void elapsed(Time start, string domain);                                  //  Measure elapsed time in a given time domain
}

#ifdef __cplusplus
    }
#endif

#endif // End UTILS_H
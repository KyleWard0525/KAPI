#ifndef K_UTILS_H
#define K_UTILS_H

/**
 * Utility header for DLL
 * 
 * kward
 */
#include "kLib.h"
#include "kTypes.h"

using namespace std;
using namespace kapi::types;

//  Ensure cross-compatibility with C
#ifdef __cplusplus
    extern "C" {
#endif

//  Include in DLL build
#ifdef BUILD_DLL
    #define K_API __declspec(dllexport)
#else
    #define K_API __declspec(dllimport)
#endif

#ifdef __cplusplus
    }
#endif

// Main DLL namespace
namespace kapi {

    K_API vector<string> removeBlanks(vector<string> strVect);                    //  Remove blanks from vector of strings
    K_API vector<string> tokenize(string str, string delim);                      //  Tokenize string with string delimeter
    K_API void elapsed(Time start, string domain);                                //  Measure elapsed time in a given time domain
    K_API void vtoi(const vector<int> vect, int* arr);                            //  Cast a vector to and int pointer
}



#endif // End K_UTILS_H
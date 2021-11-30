#ifndef KAPI_H
#define KAPI_H

/**
 * Main API file
 * 
 * kward
 */

#include "kLib.h"
#include "kTypes.h"
#include "kUtils.h"

//  Ensure cross-compatibility with C
#ifdef __cplusplus
    extern "C" {
#endif

//  Define DLL build command and type
#ifdef BUILD_DLL
    #define K_API __declspec(dllexport)
#else
    #define K_API __declspec(dllimport)
#endif


// Main API class
class K_API KAPI {

    private:

        void init();

    public:

        KAPI();

        void test();

};


#ifdef __cplusplus
    }
#endif

#endif // End KAPI_H
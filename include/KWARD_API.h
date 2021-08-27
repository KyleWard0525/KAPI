#ifndef KWARDAPI_H
#define KWARDAPI_H

/**
 * Main API file
 * 
 * kward
 */

#include "lib.h"
#include "random.h"
#include "types.h"
#include "utils.h"

//  Ensure cross-compatibility with C
#ifdef __cplusplus
    extern "C" {
#endif

//  Define DLL build command and type
#ifdef BUILD_DLL
    #define KWARD_DLL __declspec(dllexport)
#else
    #define KWARD_DLL __declspec(dllimport)
#endif


// Main API class
class KWARD_DLL KWARD_API {

    private:

        void init();

    public:

        KWARD_API();

        void test();

};


#ifdef __cplusplus
    }
#endif

#endif // End KWARDAPI_H
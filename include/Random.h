#ifndef RANDOM_H
#define RANDOM_H

/**
 * Classes and functions for randimization 
 * operations.
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

// Random class
class KWARD_DLL Random
{
    private:

        void seed();                                        //  Seed randomizer

        void init() {seed();}

    public:

        Random(){init();}                                   //  Deafult constructor
        
        int randInt();                                      //  Generate a random integer from 0 - 2^(31)-1
        double randDouble();                                //  Generate a random double from 0 - 2^(63)-1
        int randInt(int min, int max);                      //  Generate random integer in range min-max
        double randDouble(double min, double max);          //  Generate random double in range min-max
        
};

#ifdef __cplusplus
    }
#endif

#endif //   End RANDOM_H
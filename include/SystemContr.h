#ifndef SYSTEMCONTR_H
#define SYSTEMCONTR_H

/**
 * Handles system operations
 * 
 * kward
 */
#include "kLib.h"
#include "kTypes.h"

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

// System IO
class K_API SystemIO 
{
    private:
        
        void init();                                        //  Initializer

    public:

        int fileExists(cstr filename);                      //  Check if file exists on the system
        int dirExists(cstr dirname);                        //  Check if directory exists on the system
        int createFile(cstr path);                          //  Create a new file on system
        int removeFile(cstr path);                          //  Remove a file on system

};




#ifdef __cplusplus
    }
#endif


#endif //   End SYSTEMIO_H
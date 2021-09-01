#ifndef TYPES_H
#define TYPES_H

/**
 * Custom macros and type definitions for DLL
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



// Macros
#define NOW std::chrono::steady_clock::now()                    //  Gets the current point in time
#define C 299792458                                             //  Speed of light in a vaccum (m/s)

// OS Type
#if defined(_WIN32) || defined(_WIN64)
    #define OS_TYPE "Windows"
#elif defined(unix) || defined(__unix) || defined(__unix__)
    #define OS_TYPE "Unix"
#elif defined(__APPLE__) || defined(__MACH__)
    #define OS_TYPE "MacOS"
#elif defined(__linux__)
    #define OS_TYPE "Linux"
#elif defined(__ANDROID__)
    #define OS_TYPE "Android"
#else
    #define OS_TYPE "Other"
#endif


#define TIME_CAST(x, domain) chrono::duration_cast<domain>(x).count()       //  Cast time value to milliseconds
#define BYTES_TO_BITS(bytes) bytes * 8                                 // Convert bytes to bits

// Main API namespace wrapper
namespace kward_api {
    
    //  Type definitions
    namespace types {
        typedef std::chrono::steady_clock::time_point Time;                 //  Stores a point in time
        typedef const char* cstr;                                           //  C string
        typedef unsigned char byte;                                         //  Byte (8-bits)

        namespace times {
            typedef std::chrono::nanoseconds ns;                            //  Nanoseconds
            typedef std::chrono::microseconds us;                           //  Microseconds
            typedef std::chrono::milliseconds ms;                           //  Milliseconds
            typedef std::chrono::seconds seconds;                           //  Seconds
            typedef std::chrono::minutes minutes;                           //  Minutes
            typedef std::chrono::hours hours;                               //  Hours

            #define DAYS hours*24                                           //  Days
            #define WEEKS DAYS*7                                            //  Weeks
            #define MONTHS WEEKS*4                                          //  Months
            #define YEARS MONTHS*12                                         //  Years
        }

    }

}

#ifdef __cplusplus
    }
#endif

#endif //   End TYPES_H
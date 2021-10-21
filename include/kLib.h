#ifndef K_LIB_H
#define K_LIB_H

/**
 * Project library
 * 
 * kward
 */

//  Include in DLL build
#ifdef BUILD_DLL
    #define K_API __declspec(dllexport)
#else
    #define K_API __declspec(dllimport)
#endif

#include <iostream>                 //  cout
#include <vector>                   //  vectors
#include <stdio.h>                  //  printf and fopen
#include <fstream>                  //  File IO
#include <chrono>                   //  Timing
#include <Windows.h>                //  system()
#include <iomanip>                  //  IO manipulation (ex. setprecision)
#include <sys/stat.h>               //  OS information gathering
#include <map>                      //  For mapping data
#include <string>                   //  Strings
#include <string.h>                 //  Also strings
#include <math.h>                   //  pow()
#include <algorithm>                //  important algos
#include <omp.h>                    //  OpenMP for multi-processing


#endif // End K_LIB_H
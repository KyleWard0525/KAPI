/**
 * Main test file
 * 
 * kward
 */
#include "../include/KWARD_API.h"

using namespace types;

int main()
{
    // Execution start time
    Time start = NOW;

    KWARD_API api = KWARD_API();
    api.test();

    printf("\nOS Type: %s", OS_TYPE);
    printf("\nSize of %s: %d bits", "(type=Time)", BYTES_TO_BITS(sizeof(Time)));

    printf("\nElapsed time: %.6fns", TIME_CAST(NOW - start, times::ns));
    
    printf("\n");
}
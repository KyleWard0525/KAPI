/**
 * Main test file
 * 
 * kward
 */
#include "../include/KAPI.h"

using namespace kapi::types;

int main()
{
    // Execution start time
    Time start = NOW;

    KAPI api = KAPI();
    api.test();

    printf("\nOS Type: %s", OS_TYPE);
    kapi::elapsed(start, "us");
    printf("\nSize of %s: %d bits", "(type=Time)", BYTES_TO_BITS(sizeof(Time)));
    
    printf("\n");

    printf("\nThere are %d seconds in a year!", YEARS);

    getchar();
}
#include "grains.h"

uint64_t square(uint8_t index)
{
    if (index < 1 || index > 64)
        return 0;
    
    return 1ull << (index - 1); // e.g. index == 3 -> 1 << 2
                                // 1 = 0001 in binary
                                // 0001 << 2 = 0100 = 4 in decimal
                                // 4 grains on the 3rd square
}

uint64_t total(void)
{
    return UINT64_MAX; // 2^64 - 1 total grains on the board
}
#include "armstrong_numbers.h"
#include <math.h>
#include<stdio.h>

bool is_armstrong_number(const int candidate)
{
    int num_digits = 0;
    num_digits = (int)log10(candidate) + 1;

    if (num_digits == 1) return true;
    if (num_digits == 2) return false;

    int sum = 0;
    int digit = 0;
    int temp = candidate;

    while (temp != 0)
    {
        digit = temp % 10;
        sum += pow(digit, num_digits);
        temp /= 10;
    }

    return sum == candidate;
}
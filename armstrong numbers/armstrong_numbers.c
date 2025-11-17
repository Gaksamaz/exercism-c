#include "armstrong_numbers.h"
#include <math.h>   // pow()

bool is_armstrong_number(int candidate) {
    if (candidate < 0)
        return false;

    int original = candidate;
    int digits = 0;

    // Step 1: Count digits
    int temp = candidate;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    if (digits == 0)  // candidate = 0
        digits = 1;

    // Step 2: Sum of each digit^digits
    int sum = 0;
    temp = candidate;

    while (temp > 0) {
        int digit = temp % 10;
        sum += (int)pow(digit, digits);
        temp /= 10;
    }

    // 0 especially is a armstrong number (0^1 = 0)
    return sum == original;
}

#include "square_root.h"
unsigned int square_root(unsigned int number)
{
    // Left boundary of the search range
    unsigned int left = 0;
    // Right boundary of the search range
    unsigned int right = number;
    // Binary search loop
    while (left <= right) 
    {
        // Calculate the middle point to avoid overflow
        unsigned int mid = left + (right - left) / 2;
        
        // Square of the middle value
        unsigned int square = mid * mid;

        // If the square matches the number, we found the square root
        if (square == number) 
        {
            return mid;
        // If square is smaller, search in the right half
        } 
        else if (square < number) 
        {
            left = mid + 1;
        // If square is larger, search in the left half
        } 
        else 
        {
            right = mid - 1;
        }
    }
    // This return is a fallback; Exercism inputs guarantee perfect squares
    return 0;
}
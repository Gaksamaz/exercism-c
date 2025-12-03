#include "luhn.h"
#include <ctype.h>
#include <string.h>

bool luhn(const char *num)
{
    int len = strlen(num);

    // Count digits and validate characters
    // Only digits and spaces are allowed.
    // Any other character makes the input invalid.
    int digit_count = 0;
    for (int i = 0; i < len; i++)
    {
        if (isdigit(num[i]))
        {
            digit_count++;
        }
        else if (num[i] != ' ')
        {
            // Invalid character found
            return false;
        }
    }

    // The Luhn algorithm requires at least 2 digits
    if (digit_count <= 1)
        return false;

    int sum = 0;
    int pos = 0;  // Position counter from the right (0, 1, 2, ...)

    // Process the number from right to left
    for (int i = len - 1; i >= 0; i--)
    {
        // Skip spaces
        if (num[i] == ' ')
            continue;

        // Convert character to integer digit
        int digit = num[i] - '0';

        // Double every second digit (from the right)
        if (pos % 2 == 1)
        {
            digit *= 2;

            // If doubling results in a number > 9, subtract 9
            digit = (digit > 9) ? (digit - 9) : digit;
        }

        // Add to total sum
        sum += digit;

        // Increase position counter
        pos++;
    }

    // Valid if the final sum is divisible by 10
    return (sum % 10 == 0);
}

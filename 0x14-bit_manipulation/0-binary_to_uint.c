#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
    if (b == NULL) {
        return 0;
    }

    unsigned int decimal_number = 0;
    int i;
    for (i = 0; b[i] != '\0'; i++) {
        if (b[i] < '0' || b[i] > '1') {
            return 0;
        }

        decimal_number = 2 * decimal_number + (b[i] - '0');
    }

    return decimal_number;
}

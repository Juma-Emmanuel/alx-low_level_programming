#include "main.h"

/**
 * binary_to_uint - function that converts binary to unsigned int
 * @b: pointer to a string
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
    int k;
    unsigned int number;

    number = 0;
    if (!b)
        _return(0);
    for (k = 0; b[k] != '\0'; k++)
    {
        if (b[k] != '0' && b[k] != '1')
            return (0);
    }
    for (k = 0; b[k] != '\0'; k++)
    {
        number <<= 1;
        if (b[k] == '1')
            number += 1;
    }
    return (number);
}
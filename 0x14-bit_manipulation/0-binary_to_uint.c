#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number, or 0 if there is one or more
 *         chars in the string b that is not 0 or 1, or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	while (b[i] == '0' || b[i] == '1')
	{
		dec_val = (dec_val << 1) | (b[i] - '0');
		i++;
	}

	if (b[i] != '\0')
		return (0);

	return (dec_val);
}

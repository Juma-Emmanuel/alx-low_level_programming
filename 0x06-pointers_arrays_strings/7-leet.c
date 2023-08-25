#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * leet - Entry point
 * @str: String input
 * Encodes a string into 1337.
 * Return: Always 0.
 */
char *leet(char *str)
{
	int i;
	int size = strlen(str);
	char lookup[128];

	for (i = 0; i < 128; i++)
	{
		lookup[i] = i;
	}
	lookup['a'] = '4';
	lookup['A'] = '4';
	lookup['e'] = '3';
	lookup['E'] = '3';
	lookup['o'] = '0';
	lookup['O'] = '0';
	lookup['t'] = '7';
	lookup['T'] = '7';
	lookup['l'] = '1';
	lookup['L'] = '1';

	for (i = 0; i < size; i++)
	{
		unsigned char index = (unsigned char)str[i];

		if (isalpha(str[i]))
		{
			str[i] = lookup[index];
		}
	}
	return (str);
}


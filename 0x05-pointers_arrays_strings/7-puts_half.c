#include "main.h"
#include <string.h>
/**
**puts_half - Entry point
*@str: - string input
*prints half of a string,
* Return: Always 0.
*/
void puts_half(char *str)
{
	int size = strlen(str);
	int q, n;

	if (size % 2 == 0)
	{
		n = size / 2;
	}
	n = (size - 1) / 2;

	for (q = 0; q < size; q++)
	{
		if (q > n)
			_putchar(str[q]);
	}
	_putchar('\n');
}

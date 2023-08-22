#include "main.h"
#include <string.h>
/**
**print_rev - Entry point
*@s: -string input
*prints a string, in reverse,
* Return: Always 0.
*/
void print_rev(char *s)
{
	int q;
	int size = strlen(s);

	for (q = size; q > 0; q--)
	{
		_putchar(s[q]);
	}
	_putchar('\n');
}

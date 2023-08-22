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

	for (q = 0; s[q] != '\0'; q++)
	{
	}
	for (q = q - 1; q >= 0; q--)
	{
		_putchar(s[q]);
	}
	_putchar('\n');
}

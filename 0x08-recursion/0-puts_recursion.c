#include "main.h"
#include <string.h>

/**
 *_puts_recursion - prints a string, to stdout
 *@s: input string
 *Return: not.
 */
void _puts_recursion(char *s)
{
	int q = 0;
	int size = strlen(s);

	for (q = 0; q < size; q++)
	{
		_putchar(s[q]);
	}
	_putchar('\n');
}

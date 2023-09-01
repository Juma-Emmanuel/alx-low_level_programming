#include "main.h"
#include <string.h>
/**
**_puts - Entry point
*@str: - string input
*prints a string
* Return: Always 0.
*/
void _puts(char *str)
{
	int q;
	int size = strlen(str);

	for (q = 0; q < size; q++)
	{
		_putchar(str[q]);
	}
	_putchar('\n');
}

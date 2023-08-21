#include "main.h"
#include <string.h>
/**
**puts2 - Entry point
*@str: - string input
*prints every other character of a string,
* Return: Always 0.
*/
void puts2(char *str)
{
	int q;
	int size = strlen(str);

	for (q = 0; q < size; q++)
	{
		if (q % 2 == 0 || q == 0)
			_putchar(str[q]);
	}
	_putchar('\n');
}

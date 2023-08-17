#include <stdio.h>
#include "main.h"
/**
**print_most_numbers - Entry point
*prints the numbers, from 0 to 9 except 2 and 4
* Return: Always 0.
*/
void print_most_numbers(void)
{
int k;
for (k = 48; k < 58; k++)
	if (k != 50 && k != 52)
	{
		_putchar(k);
	}
_putchar('\n');
}


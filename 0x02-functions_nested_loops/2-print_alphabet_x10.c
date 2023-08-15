#include <stdio.h>
#include "main.h"
/**
**print_alphabet - Entry point
*Prints 10mtimes the alphabet in lowercase.
* Return: Always 0.
*/
void print_alphabet_x10(void)
{
int k;
int j;
for (j = 0; j <= 10; j++)
{
	for (k = 97; k < 123; k++)
		_putchar(k);
	_putchar('\n');
}
}

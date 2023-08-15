#include <stdio.h>
#include "main.h"
/**
**print_alphabet - Entry point
*Prints the alphabet in lowercase.
* Return: Always 0.
*/
void print_alphabet(void)
{
int k;
for (k = 97; k <= 123; k++)
	_putchar(k);
_putchar('\n');
}

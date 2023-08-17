#include "main.h"
/**
* print_line - Write a function that draws a straight line in the terminal.
* @n: Integer amount of _
*/
void print_line(int n)
{
	int k;

	for (k = 0; k < n; k++)
		_putchar(95);
	_putchar('\n');
}

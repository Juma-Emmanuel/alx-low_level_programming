#include <stdio.h>
#include "main.h"
/*
*print_line - Entry point
*draws a straight line in the terminal.
* Return: Always 0.
*/
void print_line(int n)
{
int k;
for (k = 1; k <= n; k++)
	_putchar(95);
_putchar('\n');
}

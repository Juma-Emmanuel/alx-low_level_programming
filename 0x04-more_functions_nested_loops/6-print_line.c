#include <stdio.h>
#include "main.h"
/*
*print_line - Write a function that draws a straight line in the terminal.
*@n: number of characters
* Return: Always 0.
*/
void print_line(int n)
{
int k;
for (k = 1; k <= n; k++)
	_putchar(95);
_putchar('\n');
}

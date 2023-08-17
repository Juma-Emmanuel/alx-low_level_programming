#include <stdio.h>
#include "main.h"
/**
**print_diagonal- Entry point
*@n: number of \
*draws a diagonal line on the terminal
* Return: Always 0.
*/
void print_diagonal(int n)
{
int i;
int j;
if (n > 0)
{
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j == i)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
			{
				_putchar(32);
			}
		}
	}
}
else
{
	_putchar('\n');
}
}

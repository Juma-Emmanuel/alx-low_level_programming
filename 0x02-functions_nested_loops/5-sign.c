#include <stdio.h>
#include "main.h"
/**
** print_sign - Entry point
* @n: The sign of the charcer
* Return: Always 0.
*/
int print_sign(int n)
{
if (n > 0)
{
	_putchar(43);
	return (1);
}
else if(n == 0)
{
	_putchar(48);
	return (0);
}
else
{
	_putchar(45);
	return (-1);
}
}

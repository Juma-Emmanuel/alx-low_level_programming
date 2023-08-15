#include <stdio.h>
#include "main.h"
/**
** _islower - Entry point
* @n: The sign of the charcer
* Return: Always 0.
*/
int _islower(int n)
{
if (n > 0)
{
	return (1);
	_putchar(43);
}
else if(n == 0)
{
	return (0);
	_putchar(48);
}
else
{
	return (-1);
	_putchar(45);
}
}

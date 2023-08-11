#include <stdio.h>

/**
 *main - Entry point
 *prints all single digit numbers of base 10 starting from 0 without printf function
 * Return: Always 0 (Success)
 */
int main(void)
{
int q;
for (q = 0; q < 10; q++)
	putchar(q + '0');
putchar('\n');
return (0);
}

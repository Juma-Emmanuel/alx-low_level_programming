#include <stdio.h>

/**
* main - prints the sum of all the multiples of 3 or 5 below 1024
*
* Return: Always 0.
*/
int main(void)
{
int j, k;
for (j = 1; j < 1024; j++)
{
	if ((j % 3) == 0 || (j % 5) == 0)
		k += j;
}
printf("%d\n", k);
return (0);
}

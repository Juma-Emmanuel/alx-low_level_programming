#include <stdio.h>
/**
* main - entry block
* @void: no argument
* Return: 0
*/
int main(void)
{
	long a, n = 612852475143;

	for (a  = 2; a <= n; a++)
	{
		if (n % a == 0)
		{
			n = n / a;
			a--;
		}
	}
	printf("%lu\n", a);
	return (0);
}

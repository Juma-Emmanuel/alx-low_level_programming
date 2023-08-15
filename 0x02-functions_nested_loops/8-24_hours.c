#include "main.h"

/**
* jack_bauer - prints every minute of the day
*
* Return: no return
*/
void jack_bauer(void)
{
int j, k, l, m;
for (j = 48; j <= 50; j++)
{
	for (k = 48; k<= 57; k++)
	{
		for (l = 48; l <= 53; l++)
		{
			for (m = 48; m <= 57; m++)
			{
				if (j >= 50 && k>= 52)
					break;
			                _putchar(j);
					_putchar(k);
					_putchar(58);
					_putchar(l);
					_putchar(m);
					_putchar('\n');
			}
		}
	}
}
}

#include <stdio.h>
#include "main.h"
/**print_numbers - Entry point
*prints the numbers, from 0 to 9
* Return: Always 0.
*/
void print_numbers(void)
{
int k;
for (k = 48; k < 58; k++)
	_putchar(k);
_putchar('\n');
}

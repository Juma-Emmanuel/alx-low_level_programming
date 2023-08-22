#include "main.h"
/**
**swap_int - Entry point
*@a: int input
*@b: - int input
*swaps the values of two integers
* Return: Always 0.
*/
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

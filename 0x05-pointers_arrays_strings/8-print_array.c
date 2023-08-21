#include "main.h"
#include <stdio.h>
/**
**print_array - Entry point
*@a: - array input
*@n: - number of elements
*prints n elements of an array of integers
* Return: Always 0.
*/
void print_array(int *a, int n)
{
        int q;

	for (q = 0; q < n; q++)
	{
		printf("%d", a[q]);
		if (q != n - 1)
			printf(", ");
	}
	printf("\n");
}

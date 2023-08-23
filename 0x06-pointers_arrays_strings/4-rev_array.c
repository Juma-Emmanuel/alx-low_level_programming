#include "main.h"
/**
**reverse_array - Entry point
*@a: - string input
*@n: - number of elements of the array
*reverses the content of an array of integers
* Return: Always 0.
*/
void reverse_array(int *a, int n)
{
	int q, w;
	int temp;

	for (w = 0, q = n - 1; w < q; w++, q--)
	{
		temp = a[w];
		a[w] = a[q];
		a[q] = temp;
	}
}

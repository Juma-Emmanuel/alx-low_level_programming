#include "function_pointers.h"
/**
 *int_index - executes a function given
 *as a parameter on each element of an array
 *@array: the array
 *@size: size of the array
 *@cmp: pointer to the function to be used to compare values.
 */
int  int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
        		return (index);
	}
	return (-1);
}

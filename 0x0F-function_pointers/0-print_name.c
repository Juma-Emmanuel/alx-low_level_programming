#include "function_pointers.h"
#include <stdio.h>
/**
 *print_name - prints a name
 *@name: starting address of memory to be filled
 *@f: the desired value. arrays is cool
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL|| f== NULL)
		return;
	f(name);
}

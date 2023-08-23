#include "main.h"
#include <string.h>
/**
**string_toupper - Entry point
*@str:- string input
*changes all lowercase letters of a string to uppercase
* Return: Always 0.
*/
char *string_toupper(char *str)
{
	int i;
	int size = strlen(str);

	for (i = 0; i < size; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	return (str);
}

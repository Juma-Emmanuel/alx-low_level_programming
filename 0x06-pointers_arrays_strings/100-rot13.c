#include "main.h"
#include <string.h>
/**
**rot13 - Entry point
*@str:- string input
*encodes a string using rot13.
* Return: Always 0.
*/
char *rot13(char *str)
{
	int i;
	int size = strlen(str);

	for (i = 0; i < size; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && (str[i] + 13 > 'z'))
			str[i] = 'a' + (str[i] + 13 - 'z' - 1);
		else if ((str[i] >= 'A' && str[i] <= 'Z') && (str[i] + 13 > 'Z'))
			str[i] = 'A' + (str[i] + 13 - 'Z' - 1);
		else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += 13;

	}
	return (str);
}

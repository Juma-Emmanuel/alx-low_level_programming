#include "main.h"
#include <string.h>
/**
**leet - Entry point
*@str:- string input
*encodes a string into 1337.
* Return: Always 0.
*/
char *leet(char *str)
{
	int i;
	int size = strlen(str);

	for (i = 0; i < size - 1; i++)
	{
		if (str[i] == 'a' || str[i] == 'A')
			str[i] = '4';
		else if (str[i] == 'e' || str[i] == 'E')
			str[i] = '3';
		else if (str[i] == 'o' || str[i] == 'O')
			str[i] = '0';
		else if (str[i] == 't' || str[i] == 'T')
			str[i] = '7';
		else if (str[i] == 'l' || str[i] == 'L')
			str[i] = '1';
	}
	return (str);
}

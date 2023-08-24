#include "main.h"
#include <ctype.h>
/**
*cap_string - Entry point
*@str:- string input
*capitalizes all words of a string.
* Return: Always 0.
**/
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (isalpha(str[i]) && (i == 0 || !isalpha(str[i - 1])))
			str[i] = toupper(str[i]);
	}
	return (str);
}


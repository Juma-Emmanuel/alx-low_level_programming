#include "main.h"
#include <string.h>
/**
**rev_string - Entry point
*@s: - string input
*reverses a string.
* Return: Always 0.
*/
void rev_string(char *s)
{
	int q, w;
	char temp;
	int size = strlen(s);

	for (w = 0, q = size - 1; w < q; w++, q--)
	{
		temp = s[w];
		s[w] = s[q];
		s[q] = temp;
	}
}

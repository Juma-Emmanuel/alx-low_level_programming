#include "main.h"
#include <string.h>
/**
**_strncat - Entry point
*@dest: - string input
*@src: - string input
*@n: - number of bytes
*concatenates two strings.
* Return: Always 0.
*/
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}

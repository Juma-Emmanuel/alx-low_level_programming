#include "main.h"
#include <string.h>
/**
**_strncpy - Entry point
*@dest: - string input
*@src: - string input
*@n: - number of bytes
*concatenates two strings.
* Return: Always 0.
*/
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}

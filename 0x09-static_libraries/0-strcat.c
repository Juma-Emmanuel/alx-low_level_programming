#include "main.h"
#include <string.h>
/**
**_strcat - Entry point
*@dest: - string input
*@src: - string input
*
* Return: Always 0.
*/
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *aaa;
	int q, j = 0;

	if (str == NULL)
		return (NULL);
	q = 0;
	while (str[q] != '\0')
		q++;

	aaa = malloc(sizeof(char) * (q + 1));

	if (aaa == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		aaa[j] = str[j];

	return (aaa);
}

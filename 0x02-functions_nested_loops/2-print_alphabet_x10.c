#include <stdio.h>
#include "main.h"
/**
**print_alphabet - Entry point
*Prints 10mtimes the alphabet in lowercase.
* Return: Always 0.
*/
void print_alphabet_x10(void)
{
int j;
char ch;
for (j = 0; j <= 10; j++)
        for (ch = 'a'; ch <= 'z'; ch++)
                _putchar(ch);
_putchar('\n');
}

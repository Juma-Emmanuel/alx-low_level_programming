#include <stdio.h>
#include "main.h"
/**
* * main - Entry point
*Prints the alphabet in lowercase.
* Return: Always 0.
*/
void print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);
}
int main(void)
{
print_alphabet(void);
putchar('\n');
return (0);
}

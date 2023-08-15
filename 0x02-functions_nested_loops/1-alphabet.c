#include <stdio.h>
#include "main.h"
/**
**print_alphabet - Entry point
*Prints the alphabet in lowercase.
* Return: Always 0.
*/
int main(void)
{
print_alphabet();
return (0);
}
void print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);
putchar('\n');
}

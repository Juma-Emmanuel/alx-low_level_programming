#include <stdio.h>

/**
 *main - Entry point
 *prints the alphabet in lowercase, and then in uppercase,
 * Return: Always 0 (Success)
 */
int main(void)
{
        for (char ch = 'a'; ch <= 'z'; ch++)
		if (ch!='q' && ch!='e')
			 putchar(ch);
        return 0;
}

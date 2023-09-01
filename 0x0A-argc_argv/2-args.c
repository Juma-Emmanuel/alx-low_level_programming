#include <stdio.h>
/**
* main - Entry point
*@argc: - number of args
*@argv: - string of args
*program that prints its name,
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int q;

	for (q = 0; q < argc; q++)
	{
		printf("%s\n", argv[q]);
	}
	return (0);
}

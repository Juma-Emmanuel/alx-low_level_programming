#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
*@argc: - number of args
*@argv: - string of args
*program that prints its name,
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int int1 = atoi(argv[1]);
		int int2 = atoi(argv[2]);

		printf("%d\n", int1 * int2);
	}
	return (0);
}


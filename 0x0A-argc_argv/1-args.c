#include <stdio.h>
/**
* main - Entry point
*@argc: - number of args
*@argv: - string of args
*program that prints its name,
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}


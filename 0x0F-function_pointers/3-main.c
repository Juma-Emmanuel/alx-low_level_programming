#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
*@argc: - number of args
*@argv: - string of args
*program that prints its name,
* Return: Always 0 (Success)
*/
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int no1, no2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	no1 = atoi(argv[1]);
	op = argv[2];
	no2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(98);
	}
	if ((*op == '/' && no2 == 0) || (*op == '%' && no2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(no1, no2));
	return (0);
}

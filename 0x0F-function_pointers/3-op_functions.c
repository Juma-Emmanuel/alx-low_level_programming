#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns sum of two numbers
 * @a: First number
 * @b: Second number
 * Return: Sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns difference of two numbers
 * @a: First number
 * @b: Second number
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns product of two numbers
 * @a: First number
 * @b: Second number
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns quotient of two numbers
 * @a: First number
 * @b: Second number
 * Return: quotient of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns modulus of two numbers
 * @a: First number
 * @b: Second number
 * Return: modulus of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}

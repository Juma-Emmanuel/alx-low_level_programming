#include <stdio.h>
/**
 * main - Entry point
 *prints out the size of various types
 * Return: Always 0 (Success)
 */
int main(void)
{
char my_char;
int my_int;
long int my_longint;
float my_float;
printf("Size of a char: %zu byte(s)\n",sizeof(my_char));
printf("Size of an int: %zu byte(s)\n",sizeof(my_int));
printf("Size of a long int: %zu byte(s)\n",sizeof(my_longint));
printf("Size of a float: %zu byte(s)\n",sizeof(my_float));
return (0);
}

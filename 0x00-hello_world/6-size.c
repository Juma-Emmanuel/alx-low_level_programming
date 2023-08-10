#include <stdio.h>
/**
 * main - Entry point
 *prints out the size of various types
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of a char:\n",sizeof(char));
printf("Size of an int:\n",sizeof(int));
printf("Size of a long int: %zu byte(s)\n",sizeof(long int));
printf("Size of a float: %zu byte(s)\n",sizeof(float));
return (0);
}

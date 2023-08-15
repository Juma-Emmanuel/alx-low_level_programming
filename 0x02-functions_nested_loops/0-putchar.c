#include <unistd.h>
/**
 * main - prints _putchar
 *
 * Description: this program prints _putchar
 *
 * Return:  0 means  (Success) 
 */
int main(void){
char text[] = "_putchar\n";
int length = sizeof(text) - 1;
write(1, text, length);
return (0);
}


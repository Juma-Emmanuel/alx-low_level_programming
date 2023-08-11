/**
 *main - Entry point
 *prints all the numbers of base 16 in lowercase,
 * Return: Always 0 (Success)
 */
int main(void)
{
int q;
for (q = 0; q < 16; q++)
	if (q < 10)
		putchar(q + '0');
        else
		putchar(q-10 + 'a');
putchar('\n');
return 0;
}

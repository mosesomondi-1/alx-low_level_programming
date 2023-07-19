#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * Return: 0 (success)
 */
int main(void)
{
	int c;
	long int a, b, f;

	a = 1;
	b = 2;
	printf("%ld, %ld", a, b);
	for (c = 0; c < 48; c++)
	{
		f = a + b;
		printf(", %ld", f);
		a = b;
		d = f;
	}
	printf("\n");
	return (0);
}

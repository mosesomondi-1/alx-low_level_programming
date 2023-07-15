#include <stdio.h>
/**
 * main - program that prints all possible different
 * different combinations of two digits
 * Return: 0 (Success)
 */
int main(void)
{
	int d, f;

	for (d = 48; d <= 56; d++)
	{
	for (f = 49; f <= 57; f++)
	{
	if (f > d)
	{
	putchar(d);
	putchar(f);
	if (d != 56 || f != 57)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}

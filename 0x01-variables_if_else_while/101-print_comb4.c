#include <stdio.h>
/**
 * main - Prints all possible combinations of three different digits,
 * The three digits must be different
 * in ascending order, separated by a comma followed by a space.
 * Return: 0 (success)
 */
int main(void)
{
	int n1, n2, n3;

	for (n1 = 0; n1 < 7; n1++)
	{
	for (n2 = n1 + 1; n2 < 8; n2++)
	{
	for (n3 = n2 + 1; n3 < 9; n3++)
	{
	putchar((n1 % 9) + '0');
	putchar((n2 % 9) + '0');
	putchar((n3 % 9) + '0');
	if (n1 == 6 && n2 == 7 && n3 == 8)
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}

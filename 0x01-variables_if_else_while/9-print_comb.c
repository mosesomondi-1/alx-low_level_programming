#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 * Return: 0 (Success)
 */
int main(void)
{
	int digit;

	for (digit = 0 ; digit < 10; digit++)
	{
	putchar(digit + '0');
	if (digit != 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}

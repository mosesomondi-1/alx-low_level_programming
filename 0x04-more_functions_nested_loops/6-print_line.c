#include "main.h"
/**
 * print_line - print a straight line
 * @n: Number of times
 * Return: 0
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

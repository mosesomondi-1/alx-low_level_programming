#include "main.h"
/**
 * print_square - prints n squares according to n number of times
 * @size: The number of times of squares
 * Return: void
 */
void print_square(int size)
{
	int m, n;

	if (size <= 0)

		_putchar('\n');
	for (m = 0; m < size; m++)
	{
		for (n = 0; n < size; n++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

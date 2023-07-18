#include "main.h"
/**
 * print_sign -  prints the sign of a number
 * @n: The character to be checked
 * Return:1 for a positive, -1 for a negative, 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}

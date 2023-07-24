#include "main.h"
/**
 * _puts - function that prints a string
 * followed by a new line, to stdout
 * @str: pointer to the string
 * Return: A string and new line
 */
void _puts(char *str)
{
	int x = 0;

	while (str[x])
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}

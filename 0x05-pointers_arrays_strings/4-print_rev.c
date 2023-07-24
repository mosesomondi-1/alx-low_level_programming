#include "main.h"
/**
 * print_rev - function that prints a string, in reverse
 * followed by a new line
 * @s: String reference pointer
 * Return: 0 (success)
 */
void print_rev(char *s)
{
	int begin = 0;

	while (s[begin])
		begin++;
	while (begin--)
		_putchar(s[begin]);
	_putchar('\n');
}

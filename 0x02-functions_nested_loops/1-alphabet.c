#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase
 * followed by a new line
 * Return: 0 (success)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}

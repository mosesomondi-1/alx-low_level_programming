#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabets ten times
 * in lowercase,followed by a new line
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	int i;
	char lett;
		for (i = 0; i <= 9; i++)
		{
			for (lett = 'a'; lett <= 'z'; lett++)
		{
			_putchar(lett);
		}
			_putchar('\n');
		}
}

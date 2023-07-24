#include "main.h"
/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * @str: The string for reference
 * Return: 0 (success)
 */
void puts2(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
		}
		x++;
	}
	_putchar('\n');
}

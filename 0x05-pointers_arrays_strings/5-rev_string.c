#include "main.h"
/**
 * rev_string - Prints a string in reverse
 * @s: used to point to the string
 * Return: 0 (success)
 */
void rev_string(char *s)
{
	int length, z, half;
	char tem;

	for (length = 0; s[length] != '\0'; length++)
		;
	z = 0;
	half = length / 2;
	while (half--)
	{
		tem = s[length - z - 1];
		s[length - z - 1] = s[z];
		s[z] = tem;
		z++;
	}
}

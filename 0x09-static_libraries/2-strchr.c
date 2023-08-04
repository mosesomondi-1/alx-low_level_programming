#include "main.h"
/**
 * *_strchr - function that locates a character in a string
 * @s: input
 * @c: input
 * Return: If c is found - a pointer to the first occurrence
 * if the character c is not found - NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}

#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * and initializes it with a specific char
 * @size: array size
 * @c: character to be assigned
 * Return: pointer to array or 0 otherwise
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int x;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		str[x] = c;
	return (str);
}

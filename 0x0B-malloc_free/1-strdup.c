#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup -That duplicates to new memory space location
 * @str: char
 * Return: 0(success)
 */
char *_strdup(char *str)
{
	char *y;
	int i, x = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	y = malloc(sizeof(char) * (i + 1));

	if (y == NULL)
		return (NULL);
	for (x = 0; str[x]; x++)
		y[x] = str[x];
	return (y);
}

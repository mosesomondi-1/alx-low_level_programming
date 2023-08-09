#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: string one to concatenate
 * @s2: string two to concatenate
 * Return: concatenates of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conca;
	int x, yx;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	x = yx = 0;
	while (s1[x] != '\0')
		x++;
	while (s2[yx] != '\0')
		yx++;
	conca = malloc(sizeof(char) * (x + yx + 1));

	if (conca == NULL)
		return (NULL);
	x = yx = 0;
	while (s1[x] != '\0')
	{
		conca[x] = s1[x];
		x++;
	}
	while (s2[yx] != '\0')
	{
		conca[x] = s2[yx];
		x++, yx++;
	}
	conca[x] = '\0';
	return (conca);
}

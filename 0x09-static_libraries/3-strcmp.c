#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @s1: Pointer to first string
 * @s2: Pointer to the second string
 * Return: Value < 0 if string is < the other, value > 0 if string is greater
 */
int _strcmp(char *s1, char *s2)
{
	int counter, compare;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}
	compare = s1[counter] - s2[counter];
	return (compare);
}

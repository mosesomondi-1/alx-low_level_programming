#include "main.h"
/**
 *_strcat - functions that concatenates two strings
 *@dest: destination string pointer
 *@src:source string pointer
 *Return: Pointer to destination string
 */
char *_strcat(char *dest, char *src)
{
	int string_length, z;

	string_length = 0;
	while (dest[string_length] != '\0')
	{
		string_length++;
	}
	for (z = 0; src[z] != '\0'; z++, string_length++)
	{
		dest[string_length] = src[z];
	}
	dest[string_length] = '\0';
	return (dest);
}

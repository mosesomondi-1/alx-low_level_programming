#include "main.h"
/**
 * *_strncat - function that concatenates two strings
 * @dest: destination string pointer
 * @src:source string pointer
 * @n: number of bytes to be concatenated
 * Return: Pointer to destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int string_length, x;
	/* x is counter of n bytes of src to be concatenated */
	/* string_length is the length of the destination string */

	string_length = 0;
	while (dest[string_length] != '\0')
	{
		string_length++;
	}
	for (x = 0; x < n && src[x] != '\0'; x++, string_length++)
	{
		dest[string_length] = src[x];
	}
	dest[string_length] = '\0';
	return (dest);
}

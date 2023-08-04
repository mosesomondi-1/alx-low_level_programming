#include "main.h"
/**
 * *_strncpy - function that copies a string
 * @dest: destination string pointer
 * @src: source of the string
 * @n: number of bytes to be used
 * Return: Pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int t;

	for (t = 0; t < n && src[t] != '\0'; t++)
		dest[t] = src[t];
	for (; t < n; t++)
		dest[t] = '\0';
	return (dest);
}

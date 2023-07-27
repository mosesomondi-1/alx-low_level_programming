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
	int bytes_count;

	for (bytes_count = 0; bytes_count < n && src[bytes_count] != '\0'; bytes_count++)
		dest[bytes_count] = src[bytes_count];
	for (; bytes_count < n; bytes_count++)
		dest[bytes_count] = '\0';
	return (dest);
}

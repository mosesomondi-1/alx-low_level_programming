#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - function that allocates memory for an array.
 * @nmemb: elements number
 * @size: size of bytes
 * Return: pointer to the allocated memory
 * if nmemb or size is 0, returns NULL
 * if malloc fails, returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (x = 0; x < (nmemb * size); x++)
		p[x] = 0;
	return (p);
}

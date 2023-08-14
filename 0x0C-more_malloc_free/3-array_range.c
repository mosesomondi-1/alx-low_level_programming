#include "main.h"
#include <stdlib.h>

/**
 * *array_range - a function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the newly created array
 * NULL if min > max and if malloc fails
 */
int *array_range(int min, int max)
{
	int *arr;
	int x;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(*arr) * ((max - min) + 1));
	if (arr == NULL)
		return (NULL);
	for (x = 0; min <= max; x++, min++)
		arr[x] = min;
	return (arr);
}

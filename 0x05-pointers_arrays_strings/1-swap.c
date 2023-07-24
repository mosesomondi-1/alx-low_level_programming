#include "main.h"
/**
 * swap_int - function that swaps the values of two integers
 * @a: Swaps and stores the address of b
 * @b: Swaps and stores the address of a
 * Return: 0 (success)
 */
void swap_int(int *a, int *b)
{
	int change;

	change = *b;
	*b = *a;
	*a = change;
}

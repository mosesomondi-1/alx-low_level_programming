#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main- prints all single digit numbers of base 10 starting from 0
 *followed by a new line
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
	putchar(i);
	}
	putchar('\n');
	return (0);
}

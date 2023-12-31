#include <stdio.h>

#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: int converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, lngth, f, dgt;

	i = 0;
	d = 0;
	n = 0;
	lngth = 0;
	f = 0;
	dgt = 0;

	while (s[lngth] != '\0')
		lngth++;
	while (i < lngth && f == 0)
	{
		if (s[i] == '-')
			++d;
		if (s[i] >= '0' && s[i] <= '9')
		{
			dgt = s[i] - '0';
			if (d % 2)
				dgt = -dgt;
			n = n * 10 + dgt;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
					f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);
	return (n);
}

/**
 * main - a program that multiplies two numbers
 * @argc: Arguments number
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int product, n1, n2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	product = n1 * n2;
	printf("%d\n", product);
	return (0);
}

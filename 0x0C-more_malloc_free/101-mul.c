#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * _is_zero - checks if any number is zero
 * @argv: argument vector
 * Return: void
 */
void _is_zero(char *argv[])
{
	int x, isn1 = 1, isn2 = 1;

	for (x = 0; argv[1][x]; x++)
		if (argv[1][x] != '0')
		{
			isn1 = 0;
			break;
		}
	for (x = 0; argv[2][x]; x++)
		if (argv[2][x] != '0')
		{
			isn2 = 0;
			break;
		}
	if (isn1 == 1 || isn2 == 1)
	{
		printf("0\n");
		exit(0);
	}
}

/**
 * _initialize_array - set memery to zero in a new array
 * @ar: array char
 * @lar: length of the char array
 * Return: pointer of a char array
 */
char *_initialize_array(char *ar, int lar)
{
	int x = 0;

	for (x = 0; x < lar; x++)
		ar[x] = '0';
	ar[lar] = '\0';
	return (ar);
}

/**
 * _checknum - determines length of the number
 * and checks if number is in base 10.
 * @argv: arguments vector
 * @n: row of the array
 * Return: length of the number
 */
int _checknum(char *argv[], int n)
{
	int ln;

	for (ln = 0; argv[n][ln]; ln++)
		if (!isdigit(argv[n][ln]))
		{
			printf("Error\n");
			exit(98);
		}
	return (ln);
}
/**
 * main - multiplies two positive numbers
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int ln1, ln2, lnout, add, addl, x, j, k, ca;
	char *nout;

	if (argc != 3)
		printf("Error\n"), exit(98);
	ln1 = _checknum(argv, 1), ln2 = _checknum(argv, 2);
	_is_zero(argv), lnout = ln1 + ln2, nout = malloc(lnout + 1);
	if (nout == NULL)
		printf("Error\n"), exit(98);
	nout = _initialize_array(nout, lnout);
	k = lnout - 1, x = ln1 - 1, j = ln2 - 1, ca = addl = 0;
	for (; k >= 0; k--, x--)
	{
		if (x < 0)
		{
			if (addl > 0)
			{
				add = (nout[k] - '0') + addl;
				if (add > 9)
					nout[k - 1] = (add / 10) + '0';
				nout[k] = (add % 10) + '0';
			}
			x = ln1 - 1, j--, addl = 0, ca++, k = lnout - (1 + ca);
		}
		if (j < 0)
		{
			if (nout[0] != '0')
				break;
			lnout--;
			free(nout), nout = malloc(lnout + 1), nout = _initialize_array(nout, lnout);
			k = lnout - 1, x = ln1 - 1, j = ln2 - 1, ca = addl = 0;
		}
		if (j >= 0)
		{
			add = ((argv[1][x] - '0') * (argv[2][j] - '0')) + (nout[k] - '0') + addl;
			addl = add / 10, nout[k] = (add % 10) + '0';
		}
	}
	printf("%s\n", nout);
	return (0);
}

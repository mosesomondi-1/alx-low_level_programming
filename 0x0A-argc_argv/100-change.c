#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - program that prints the minimum number of coins
 * To make change for an amount of money
 * @argc: arguments number
 * @argv: array of argumentS
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int numb, ch, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	numb = atoi(argv[1]);
	result = 0;

	if (numb < 0)
	{
		printf("0\n");
		return (0);
	}
	for (ch = 0; ch < 5 && numb >= 0; ch++)
	{
		while (numb >= coins[ch])
		{
			result++;
			numb -= coins[ch];
		}
	}
	printf("%d\n", result);
	return (0);
}

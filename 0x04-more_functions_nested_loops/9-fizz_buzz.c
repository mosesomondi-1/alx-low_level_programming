#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Description: prints the numbers from 1 to 100
 * multiples of three print Fizz
 * multiples of five print Buzz
 * print FizzBuzz for both
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
	if ((i % 3 == 0) && (i % 5 == 0))
	{
	printf("FizzBuzz");
	}
	else if (i % 3 == 0)
	{
	printf("Fizz");
	}
	else if (i % 5 == 0)
	{
	printf("Buzz");
	}
	else
	{
	printf("%d", i);
	}
	if (i != 100)
	{
	printf(" ");
	}
	}
	printf("\n");
	return (0);
}

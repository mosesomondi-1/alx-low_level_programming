#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints its name
 * @argc: arguments number
 * @argv: array of arguments
 * Return: 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}

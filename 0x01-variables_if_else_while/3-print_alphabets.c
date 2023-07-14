#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main- printing alphabets in lowercase then uppercase
* Return: 0 (Success)
*/
int main(void)
{
	char letters;
	char s = '\n';

	for (letters = 'a'; letters <= 'z'; letters++)
		putchar(letters);
	for (letters = 'A'; letters <= 'Z'; letters++)
		putchar(letters);
	putchar(s);
	return (0);
}

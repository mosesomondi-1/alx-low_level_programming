#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main- prints alphabets in lowercase except e and q
 *followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letters;
	char s = '\n';

	for (letters = 'a' ; letters <= 'z' ; letters++)
	if (letters != 'e' && letters != 'q')
	putchar(letters);
	putchar(s);
	return (0);
}

#include "main.h"
/**
 * *leet - function that encodes a string into 1337
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * @s: Pointer to string
 * Return: Pointer to s
 */
char *leet(char *s)
{
	int sl, lc;
	char leetLetters[] = "aAeEoOtTlL";
	char leetNumbers[] = "4433007711";

	/* scan through string */
	sl = 0;
	while (s[sl]  != '\0')
		/* check whether leetLetter is found */
	{
		lc = 0;
		while (lc < 10)
		{
			if (leetLetters[lc] == s[sl])
			{
				s[sl] = leetNumbers[lc];
			}
			lc++;
		}
		sl++;
	}
	return (s);
}

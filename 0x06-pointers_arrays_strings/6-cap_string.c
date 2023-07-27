#include "main.h"
/**
 * *cap_string - capitalizes all words of a string
 * @s: Pointer to string
 * Return: pointer to s
 */
char *cap_string(char *s)
{
	int sc;

	/* scan through string */
	sc = 0;
	while (s[sc] != '\0')
	{/* if next character after count is a char , capitalize it */
		if (sc == 0 && s[sc] >= 97 && s[sc] <= 122)
		{
			s[sc] = s[sc] - 32;
		}
		if (s[sc] == ' ' || s[sc] == '\t' || s[sc] == '\n'
				|| s[sc] == ',' || s[sc] == ';' || s[sc] == '.'
				|| s[sc] == '.' || s[sc] == '!' || s[sc] == '?'
				|| s[sc] == '"' || s[sc] == '(' || s[sc] == ')'
				|| s[sc] == '{' || s[sc] == '}')
		{
			if (s[sc + 1] >= 97 && s[sc + 1] <= 122)
			{
				s[sc + 1] = s[sc + 1] - 32;
			}
		}
		sc++;
	}
	return (s);
}

#include <stdlib.h>
#include "main.h"

/**
 * count_word - to count the number of words in a string
 * @s: string to be searched
 * Return: words number
 */
int count_word(char *s)
{
	int f, c, w;

	f = 0;
	w = 0;
	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			f = 0;
		else if (f == 0)
		{
			f = 1;
			w++;
		}
	}
	return (w);
}

/**
 * **strtow - function that splits a string into words
 * @str: string to be split
 * Return: NULL if str == NULL or Error otherwise
*/
char **strtow(char *str)
{
	char **strings, *tmp;
	int i, k = 0, length = 0, words, c = 0, begin, end;

	while (*(str + length))
		length++;
	words = count_word(str);
	if (words == 0)
		return (NULL);
	strings = (char **) malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);
	for (i = 0; i <= length; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (begin < end)
					*tmp++ = str[begin++];
				*tmp = '\0';
				strings[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			begin = i;
	}
	strings[k] = NULL;
	return (strings);
}

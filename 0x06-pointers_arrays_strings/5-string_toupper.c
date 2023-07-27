#include "main.h"
/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 * @a: Pointer to string
 * Return: Pointer to uppercase string
 */
char *string_toupper(char *a)
{
	int string_length;

	string_length = 0;
	while (a[string_length] != '\0')
	{
	if (a[string_length] >= 97 && a[string_length] <= 122)
		{
		a[string_length] = a[string_length] - 32;
		}
		string_length++;
	}
	return (a);
}

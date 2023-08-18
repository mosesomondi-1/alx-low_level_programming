#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_all - function that prints anything
 * @char: input
 * @format: list of types of arguments passed to the function
 * @...: input
 * Return: 0 (success)
 */
void print_all(const char * const format, ...)
{
	int x = 0;
	char *str, *sp = "";
	va_list list;

	va_start(list, format);
	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", sp, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sp, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sp, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sp, str);
					break;
				default:
					x++;
					continue;
			}
			sp = ", ";
			x++;
		}
	}
	printf("\n");
	va_end(list);
}

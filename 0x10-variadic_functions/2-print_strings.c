#include "variadic_functions.h"
#include <stdlib.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *a;
	va_list strings;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		a = va_arg(strings, char *);

		if (a == NULL)
			a = "(nil)";
		printf("%s", a);

		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(strings);
}

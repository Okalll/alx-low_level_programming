#include "main.h"
/**
 * print_numbers - prints numbers from 0 to 9
 * followed by a new line
 * Return: Always void
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}

	_putchar('\n');
}
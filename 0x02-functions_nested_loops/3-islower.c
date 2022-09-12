#include "main.h"
/**
 * _islower - checks if c is lowercase or uppercase
 * @c: the character to be chaecked
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}

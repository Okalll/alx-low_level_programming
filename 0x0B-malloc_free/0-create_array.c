#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of char
 * and initializes it with a specific char
 * @size: size of array
 * @c: character to insert
 * Return: NULL if size is 0 or if it fails
 * Pointer to array if it passes
 */
char *create_array(unsigned int size, char c)
{
	char *a:
	unsigned int i = 0;

	if (size == 0)

		return (NULL);

	a = (char *) malloc(sizeof(char) * size);

	if (a == NULL)
		return (0);

	while (i < size)
	{
		*(a + 1) = c;
		i++;
	}
	*(a + i) = '\0';

	return (a);
}

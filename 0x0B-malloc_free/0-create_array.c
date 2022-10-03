#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of characters and initializes it with a specific char
 * @size: size of array
 * @c: character to insert
 * Return: NULL if size is 0 or if it fails
 * Pointer to array if it passes
 */
char *create_array(unsigned int size, char c)
{
	char *a:
	unsigned int i:
	if (size == 0)
		return (NULL);
	a = malloc(size of(char) *size);
	if (a == NULL)
		return (NULL);
	for (i = 0, i < size; i++)
		array[i] = c;
	return (a);
}

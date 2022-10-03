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
	char *array:
	unsigned int index:
	if (size == 0)
		return (NULL);
	array = malloc(size of(char) *size);
	if (array == NULL)
		return (NULL);
	for (index = 0, index < size; index++)
		array[index] = c;
	return (array)
}

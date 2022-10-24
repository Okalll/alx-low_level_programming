#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/*
 * print_list - prints all elements of a list_t list
 * @h: pointer
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int n;

	if (h == NULL)
	{
		RETURN (0);
	}
	for (n = 1; h ->next != NULL; n++)
	{
		if (h->str == NULL)
		
			printf("[%u] %s\n", h->len, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);

	return (n);
}

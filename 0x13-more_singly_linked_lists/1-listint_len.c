#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - for management of a list
 * @h: is the pointer
 *
 * Return: n value counter
 */

size_t listint_len(const listint_t *h)
{
	int len_list;

	len_list = 0;
	while (h != NULL)
	{
		h = h->next;
		len_list++;
	}

	return (len_list);
}

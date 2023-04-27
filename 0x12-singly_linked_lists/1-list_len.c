#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - check the code
 * @h: the head of the list
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{

		h = h->next;
		++i;
	}
	return (i);
}

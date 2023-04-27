#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of  list_t list
 *
 * @h: the head of the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		    printf("%s\n", h->str);
		}
		i++;
		h = h->next;
	}
	return (i);
}

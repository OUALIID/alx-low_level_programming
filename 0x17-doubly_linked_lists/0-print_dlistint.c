#include "lists.h"
/**
 * print_dlistint - code check
 * @h: header of the list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int nodes;

	nodes = 0;
	if (h != NULL)
		while (h != NULL)
		{
			printf("%d\n", h->n);
			nodes++;
			h = h->next;
		}
	return (nodes);
}

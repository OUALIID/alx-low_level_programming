#include "lists.h"

/**
 * dlistint_len - code check
 * @h: header of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes;

	nodes = 0;
	if (h != NULL)
		while (h != NULL)
		{
			nodes++;
			h = h->next;
		}
	return (nodes);
}

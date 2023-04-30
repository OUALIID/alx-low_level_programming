#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: prints out the contents of a singly linked list.
 * Return: nodes in the linked list.
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		++i;
	}

	return (i);
}

#include "lists.h"

/**
 * get_dnodeint_at_index - code check
 * @head: header of the list
 * @index: it is a variable
 * Return: is NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node;
	dlistint_t *current;

	node = 0;
	current = head;
	if (head == NULL)
		return (NULL);
	while (current != NULL)
	{
		if (index == node)
			return (current);
		current = current->next;
		node++;
	}
	return (NULL);
}

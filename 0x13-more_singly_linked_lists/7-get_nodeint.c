#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns
 * the nth node of a listint_t
 * @head: is the Input list
 * @index: is the Index Node
 * Return: is the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	if (head == NULL)
	for (i=0 ; i < index; ++i)
		{
			if (head->next != NULL)
				head = head->next;
		}
		return (head);
}

#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes the node at index index
 * @head: the Input of list
 * @index: the Index of node
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *new_node, *new_elem;

	if (*head == NULL)
	return (-1);
	new_node = *head;
	if (index == 0)
	{
		*head = new_node->next;
		free(new_node);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (new_node->next == NULL && new_node == NULL)
			return (-1);
			new_node = new_node->next;
	}
	new_elem = new_node->next;
	new_node->next = new_elem->next;
	free(new_elem);
	return (1);
}

#include "lists.h"
/**
 * delete_dnodeint_at_index - code check
 * @head: header of the list
 * @index: it is a index variable
 * Return: return NULL
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int idx = 0;
	dlistint_t *current, *p;

	if (*head != NULL)
	{
		if (index == 0)
		{
			p = (*head);
			if ((*head)->next != NULL)
			{
				(*head)->next->prev = NULL;
				*head = (*head)->next;
				free(p);
				return (1);
			}
			*head = NULL;
			free(p);
			return (1);
		}
		current = *head;
		while (current != NULL)
		{
			if (index == idx)
			{
				current->prev->next = current->next;
				if (current->next != NULL)
					current->next->prev = current->prev;
				free(current);
				return (1);
			}
			current = current->next;
			idx++;
		}
	}
	return (-1);
}

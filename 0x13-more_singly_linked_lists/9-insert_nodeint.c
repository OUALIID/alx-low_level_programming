#include "lists.h"
/**
 * insert_nodeint_at_index - A function that inserts
 * a new node at a given position.
 * @head: is the Input list
 * @idx: is the Index
 * @n: is the  value
 * Return: depend of the condition
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *j;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	j = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (j == NULL)
		{
			free(new);
			return (NULL);
		}
		j = j->next;
	}
	new->next = j->next;
	j->next = new;
	return (new);
}

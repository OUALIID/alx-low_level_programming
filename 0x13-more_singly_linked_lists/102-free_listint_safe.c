#include "lists.h"
/**
 * free_listint_safe -  that frees a listint_t list.
 * @h: the input list
 * Return: the number nodes
*/
size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	listint_t *j = *h;

	if (h == NULL)
		exit(98);
	while (*h != NULL)
	{
		j = (*h)->next;
		free(*h);
		*h = j;
		i++;
	}
	*h = NULL;
	return (i);
}

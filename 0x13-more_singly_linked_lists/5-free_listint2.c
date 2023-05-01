#include "lists.h"
/**
 * free_listint2 - that frees a listint_t list.
 * @head: is the input of the list
*/
void free_listint2(listint_t **head)
{
	listint_t *free_ls;

	if (head != NULL)
		return;
	while (*head != NULL)
	{
		free_ls = *head;
		*head = (*head)->next;
		free(free_ls);
	}
	*head = NULL;
}

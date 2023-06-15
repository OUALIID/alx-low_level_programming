#include "lists.h"
/**
 * free_dlistint - code check
 * @head: header of the list
 * Return: is void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *p;

	while (head != NULL)
	{
		p = head;
		head = head->next;
		free(p);
	}
	free(head);
}
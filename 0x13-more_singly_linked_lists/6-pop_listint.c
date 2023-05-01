#include "lists.h"
/**
 * pop_listint - A function that deletes
 * the head node of a listint_t
 * @head: is the Input list
 * Return: deleted the Content
*/
int pop_listint(listint_t **head)
{
	int n;
	listint_t *free_ls;

	if (*head == NULL)
		return (0);
	free_ls = *head;
	*head = (*head)->next;
	n = free_ls->n;
	free(free_ls);
	return (n);
}

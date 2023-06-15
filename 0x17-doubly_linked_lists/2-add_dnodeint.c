#include "lists.h"

/**
 * add_dnodeint - code check
 * @head: header of the list
 * @n: it is a variable
 * Return: the number of nodes
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return (*head);
	}
	new->next = *head;
	(*head)->prev = new;
	new->prev = NULL;
	*head = new;
	return (*head);
}

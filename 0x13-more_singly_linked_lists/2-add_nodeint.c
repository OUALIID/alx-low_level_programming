#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: is the Input list
 * @n: is the input of the list
 * Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_elem;

	new_elem = malloc(sizeof(listint_t));
	if (!new_elem)
		return (NULL);

	new_elem->n = n;
	new_elem->next = *head;
	*head = new_elem;

	return (new_elem);
}


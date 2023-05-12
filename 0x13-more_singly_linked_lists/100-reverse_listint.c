#include "lists.h"
/**
 * reverse_listint - check this code.
 * @head: the double pointer
 * Return: depend of the condition
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *len_1, *len_2;

	len_1 = NULL;
	len_2 = NULL;

	while (*head != NULL)
	{
		len_1 = (*head)->next;
		(*head)->next = len_2;
		len_2 = (*head);
		(*head) = len_1;
	}
	(*head) = len_2;
	return (*head);
}

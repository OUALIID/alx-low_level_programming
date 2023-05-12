#include "lists.h"

/**
 * print_listint_safe - that prints a listint_t linked list.
 * @head: the nput list
 * Return: thr number nodes
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t i;
	long int j;

	if (head == NULL)
		exit(98);
	i = 0;
	while (head)
	{
		j = head - head->next;
		i++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (j <= 0)
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
		else
			head = head->next;
	}
	return (i);
}
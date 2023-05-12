#include "lists.h"

/**
 * print_listint_safe - that prints a listint_t linked list.
 * @head: the nput list
 * Return: thr number nodes
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t i;
	long int t;

	if (head == NULL)
		exit(98);
	i = 0;
	while (head)
	{
		t = head - head->next;
		i++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (t <= 0)
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
		else
			head = head->next;
	}
	return (i);
}

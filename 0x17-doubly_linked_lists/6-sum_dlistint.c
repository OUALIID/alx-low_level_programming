#include "lists.h"

/**
 * sum_dlistint - code check
 * @head: header of the list
 * Return: return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	if (head != NULL)
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	return (sum);
}

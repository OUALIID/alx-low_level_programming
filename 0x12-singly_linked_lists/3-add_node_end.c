#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * _strlen - the finds the length of a string
 * @str: string to find the length
 * Return: the length of string
 */

int _strlen(char *str)
{
	int i = 0;

	if (*str)
	{
		++i;
		++str;
	}

	return (i);
}
/**
 * add_node_end - adds a new node to the end of  list
 * @head: the double pointer to linked list
 * @str: the string to add to the new node
 * Return: the pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_1, *new_2;

	if (str == NULL)
		return (NULL);
	new_1 = malloc(sizeof(list_t));
	if (new_1 == NULL)
		return (NULL);
	new_1->str = strdup(str);
	if (new_1->str == NULL)
	{
		free(new_1);
		return (NULL);
	}
	new_1->len = _strlen(new_1->str);
	new_1->next = NULL;
	if (*head == NULL)
	{
		*head = new_1;
		return (new_1);
	}
	new_2 = *head;
	while (new_2->next)
		new_2 = new_2->next;
	new_2->next = new_1;
	return (new_1);
}

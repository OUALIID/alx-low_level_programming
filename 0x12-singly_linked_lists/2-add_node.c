#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * _strlen - returns the length of string.
 * @s: the  string to length
 * Return: the length of the string
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		++i;
	}
	return (i);
}

/**
 * add_node - add new node at the beginning a list
 * @head: head the list
 * @str: String value to be stored in the new node
 * Return: the number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add_n;

	add_n = malloc(sizeof(list_t));
	if (add_n == NULL)
		return (NULL);
	add_n->str = strdup(str);
	add_n->len = _strlen(str);
	add_n->next = *head;
	*head = add_n;
	return (add_n);
}

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - realease the memory allocated for list
 * @head: a pointer to first node of the list to free
 */
void free_list(list_t *head)
{
    list_t *new_1;

    if (head == NULL)
    {
        new_1 = head;
        head = head->next;
        free(new_1->str);
        free(new_1);
    }
}

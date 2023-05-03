#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the node to return.
 *
 * Return: If the node does not exist - NULL.
 * Otherwise - a pointer to the requested node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i, j;
listint_t *parcourt;
if (head == NULL)
return (NULL);
if (index == 0)
return (head);
parcourt = head;
for (j = 0; parcourt != NULL; j++)
{
parcourt = parcourt->next;
}
if (index >= j)
return (NULL);
parcourt = head;
for (i = 0; i < index - 1; i++)
{
parcourt = parcourt->next;
}
return (parcourt->next);
}

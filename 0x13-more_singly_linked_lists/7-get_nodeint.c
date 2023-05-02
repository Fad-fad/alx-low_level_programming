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
listint_t *az = head;
unsigned int i, pm = 0;
if (head == NULL)
return (NULL);
for (i = 0; az != NULL; i++)
{
if (pm == index)
{
break;
}
az = az->next;
pm++;
}
return (az);
}

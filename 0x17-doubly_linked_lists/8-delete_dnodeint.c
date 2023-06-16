#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - Deletes a node at a given in
 * @head: Pointer to the head
 * @index: Index of the node
 * Return: 1 upon success, -1
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current, *prev_node, *next_node;
unsigned int i;
if (head == NULL || *head == NULL)
return (-1);
current = *head;
if (index == 0)
{
*head = (*head)->next;
if (*head != NULL)
(*head)->prev = NULL;		
free(current);
return (1);
}
for (i = 0; i < index; i++)
{
prev_node = current;
current = current->next;
if (current == NULL)
return (-1);
}
next_node = current->next;
prev_node->next = next_node;
if (next_node != NULL)
next_node->prev = prev_node;
free(current);
return (1);
}

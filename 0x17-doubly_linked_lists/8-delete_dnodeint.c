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
dlistint_t *current, *del;
unsigned int i;
if (head == NULL || *head == NULL)
	return (-1);
i = 0;
current = *head;

if (index == 0)
{
del = *head;
*head = (*head)->next;
free (del);
if (*head != NULL)
	(*head)->prev = NULL;
return (1);
}
else
{
	while (i < index && current != NULL)
	{
		current = current->next;
		i++;
	}
	if (current != NULL)
	{
		del = current;
		current->prev->next = current->next;
		free(del);
		return (1);
	}
	else
		return (-1);

}
}

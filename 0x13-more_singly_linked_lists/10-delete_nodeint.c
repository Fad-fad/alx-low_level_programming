#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at a given
 * @head: A pointer to the address of the
 * @index: The index of the node to be deleted - indices start at 0.
 * Return: ccess - 1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ljadid, *lqadim;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		ljadid = *head;
		*head = (*head)->next;
		free(ljadid);
		return (1);
	}

	lqadim = *head;
	ljadid = lqadim->next;

	for (i = 1; ljadid != NULL && i < index; i++)
	{
		lqadim = ljadid;
		ljadid = ljadid->next;
	}

	if (ljadid == NULL)
		return (-1);
	lqadim->next = ljadid->next;
	free(ljadid);

	return (1);
}

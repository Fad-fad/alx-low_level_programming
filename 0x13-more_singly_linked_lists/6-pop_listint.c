#include "lists.h"

/**
 * pop_listint - Write a function that deletes the head node
 * @head: double pointer.
 *
 * Return: the head node's data (g)
 */
int pop_listint(listint_t **head)
{
listint_t *nok;
int f;
listint_t *tok;
if (head == NULL)
{
return (0);
}
nok = *head;
f = nok->n;
tok = nok->next;
free(nok);
*head = tok;
return (f);
}

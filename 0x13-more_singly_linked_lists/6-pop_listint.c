#include "lists.h"

/**
 * pop_listint - Write a function that deletes the head node
 * @head: double pointer.
 *
 * Return: the head node's data (g)
 */
int pop_listint(listint_t **head)
{
listint_t *reserve;
int n;
if (*head == NULL)
return (0);
n = (*head)->n;
reserve = (*head)->next;
free(*head);
*head = reserve;
return (n);
}

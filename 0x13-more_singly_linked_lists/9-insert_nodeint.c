#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer to the head of the list
 * @idx: index of the list where the new node should be added (starting at 0)
 * @n: data value for the new node
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i, j;
listint_t *new, *parcourt;
listint_t *reserve;
new = malloc(sizeof(listint_t));
if (head == NULL || new == NULL)
{
return (NULL);
}
new->n = n;
parcourt = *head;
i = 0;
if (i == idx)
{
new->next = parcourt;
*head = new;
return (new);
}
for (j = 0; parcourt != NULL; j++)
{
parcourt = parcourt->next;
}
if (idx >= 2 + (j - 1))
return (NULL);
parcourt = *head;
while (i < idx - 1)
{
parcourt = parcourt->next;
i++;
}
reserve = parcourt->next;
parcourt->next = new;
new->next = reserve;
return (new);
}

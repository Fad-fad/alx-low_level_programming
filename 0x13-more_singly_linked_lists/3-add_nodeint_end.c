#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <string.h>
#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the beginning of a listint_t list
 * @head: pointer to pointer to head of list
 * @n: integer value to be stored in new node
 * Return: address of new element, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *fin, *ptr = *head;
if (head == NULL)
return (NULL);
fin = malloc(sizeof(listint_t));
if (fin == NULL)
return (NULL);
fin->n = n;
fin->next = NULL;
if (*head == NULL)
{
*head = fin;
return (fin);
}
while (ptr->next != NULL)
{
ptr = ptr->next;
}
ptr->next = fin;
return (fin);
}


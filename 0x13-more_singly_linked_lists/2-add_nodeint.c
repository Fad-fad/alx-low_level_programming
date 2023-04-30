#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <string.h>
#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to pointer to head of list
 * @n: integer value to be stored in new node
 * Return: address of new element, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *nd;
nd->n = n;
nd->next = *head;
return (nd);
}

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <unistd.h>
#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the head of the list
 * @str: string to add to the new node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *helper;
if (head == NULL)
return (NULL);
helper = *head;
copy = strdup(str);
new->str = copy;
new->len = strlen(str);
new->next = NULL;
while (helper != NULL)
{
helper = helper->next;
}
helper->next = new;
return(new);
}


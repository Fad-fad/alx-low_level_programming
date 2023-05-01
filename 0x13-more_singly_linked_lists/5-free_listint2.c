#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - frees a ltint_t list
 * @head: pointer to  of the list
 */
void free_listint2(listint_t **head)
{
listint_t *rempl, *helper;
if (head == NULL)
return;
helper = *head;
while (helper != NULL)
{
rempl = helper->next;
free(helper);
helper = rempl;
}
*head = NULL;
}

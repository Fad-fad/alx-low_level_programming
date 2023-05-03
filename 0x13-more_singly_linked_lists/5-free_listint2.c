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
listint_t *tr = *head;
listint_t *fr;
if (*head == NULL)
{
return;
}
while (tr != NULL)
{
fr = tr;
tr = tr->next;
free(fr);
}
*head = NULL;
}

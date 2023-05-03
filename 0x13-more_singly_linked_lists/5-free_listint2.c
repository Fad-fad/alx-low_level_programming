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
listint_t *tr;
listint_t *fr;
if (head == NULL)
{
return;
}
tr = *head;
while (tr != NULL)
{
fr = tr->next;
free(tr);
tr = fr;
}
*head = NULL;
}

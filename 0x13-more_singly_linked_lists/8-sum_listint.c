#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: sum of all the data (n) of the list, or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
listint_t *yo = head;
int num = 0;
int i;
for (i = 0; yo != NULL; i++)
{
num += yo->n;
yo =  yo->next;
}
return (num);
}

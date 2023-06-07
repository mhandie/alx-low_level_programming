#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer
 * @idx: int
 * @n: int
 *
 * Return: 0 if empty
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *a;
listint_t *tmp = *head;
a = malloc(sizeof(listint_t));
if (!a || !head)
return (NULL);
a->n = n;
a->next = NULL;
if (idx == 0)
{
a->next = *head;
*head = a;
return (a);
}
for (i = 0; tmp && i < idx; i++)
{
if (i == idx - 1)
{
a->next = tmp->next;
tmp->next = a;
return (a);
}
else
tmp = tmp->next;
}
return (NULL);
}

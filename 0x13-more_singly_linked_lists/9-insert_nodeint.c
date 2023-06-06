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
if (head == NULL)
return (NULL);
listint_t *new_code = (listint_t *)malloc(sizeof(listint_t));
if (new_code == NULL)
return (NULL);
new_code->next = n;
if (idx == 0)
{
new_code->next = *head;
*head = new_code;
}
else
{
listint_t *current = *head;
unsigned int i = 0;
while (current != NULL && i < idx - 1)
{
current = current->next;
i++;
}
if (current == NULL || current->next == NULL)
{
free(new_code);
return (NULL);
}
new_code->next = current->next;
current->next = new_code;
}
return (new_code);
}

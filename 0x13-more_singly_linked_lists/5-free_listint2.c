#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: pointer
 * @n: data
 *
 * Return: pointer to the new node, or NULL if it fails
 */
void free_listint2(listint_t **head)
{
listint_t *loose;
if (head == NULL || *head == NULL)
{
return (0);
}
while (*head != NULL)
{
loose = *head;
*head = (*(head))->next;
free(loose);
}
head = NULL;
}

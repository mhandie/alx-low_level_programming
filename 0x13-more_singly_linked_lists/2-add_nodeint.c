#include <stdlib.h>
#include "lists.h"

/**
 * listint_t - the head
 * add_nodeint: adds a new node
 * @n: int
 * @head: the head
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
if (head == NULL)
{
return (NULL);
}
listint_t *new_code = malloc(sizeof(listint_t));
if (new_code == NULL)
{
return (NULL);
}
new_code->n = n;
new_code->next = *head;
*head = new_code;
return (new_code);
}

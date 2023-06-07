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
listint_t *one;
one= malloc(sizeof(listint_t));
if (!one)
return (NULL);
one->n = n;
one->next = *head;
*head = one;
return (one);
}

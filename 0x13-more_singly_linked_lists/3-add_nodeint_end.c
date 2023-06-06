#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - adds a new node
 * @head: pointer
 * @n: data
 *
 * Return: pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_code = malloc(sizeof(listint_t));
if (new_code == NULL)
{
return (NULL);
}
new_code->n = n;
while (*head != NULL)
{
head = &(*head)->next;
}
*head = new_code;
return (new_code);
}

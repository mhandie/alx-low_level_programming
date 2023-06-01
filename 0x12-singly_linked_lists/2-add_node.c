#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the list_t
 * @str: new string
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
if (str == NULL)
return (NULL);
list_t *newElement = malloc(sizeof(list_t));
if (newElement == NULL)
return (NULL);
newElement->str = strdup(str);
if (newElement->str == NULL)
{
free(newElement);
return (NULL);
}
newElement->len = strlen(str);
newElement->next = *head;
*head = newElement;
return (newElement);
}

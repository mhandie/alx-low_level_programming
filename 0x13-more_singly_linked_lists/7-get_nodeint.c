#include <stddef.h>
#include "lists.h"

/**
* get_nodeint_at_index - Returns the nth node
* @head: The head
* @index: The position
*
* Return: Address of the element at the given index, or NULL if not found
**/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count = 0;
listint_t *current = head;
while (current != NULL)
{
if (count == index)
return (current);
current = current->next;
count++;
}
return (NULL);
}

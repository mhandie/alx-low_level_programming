#include <stddef.h>
#include "lists.h"

/**
* listint_len - Return number of elements
* listint_t : for header
* @h: Head list.
*
* Return: Number
*/
size_t listint_len(const listint_t *h)
{
size_t number = 0;
while (h != NULL)
{
number++;
h = h->next;
}
return (number);
}

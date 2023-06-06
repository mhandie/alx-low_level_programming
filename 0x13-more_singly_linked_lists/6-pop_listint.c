#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
* pop_listint - Deletes the head node
* @head: Pointer
*
* Return: Head node
**/
int pop_listint(listint_t **head)
{
int n_aux;
listint_t *temp;
if (head == NULL || *head == NULL)
return (0);
temp = (*head)->next;
n_aux = (*head)->n;
free(*head);
*head = temp;
return (n_aux);
}

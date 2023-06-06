#include <stddef.h>
#include "lists.h"
/**
 * sum_listint - sums all data
 * @head: pointer
 *
 * Return: 0 if empty
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *tmp = head;
while (tmp)
{
sum += tmp->n;
tmp = tmp->next;
}
return (sum);
}

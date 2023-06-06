#include <lists.h>
unsigned int print_listint(const listint_t *h)
{
unsigned int count = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
Count++;
}
return (count);
}
size_t print_listint(const listint_t *h)
{
size_t count = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
Count++;
}
return (count);
}

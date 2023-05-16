#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array of size
 * @size: array
 * @c: assign
 * Description: create an array of size
 * Return: 0
 *
 */
char *create_array(unsigned int size, char c)
{
char *st;
unsigned int i;
st = malloc(sizeof(char) * size);
if (size == 0 || st == NULL)
return (NULL);
for (i = 0; i < size; i++)
st[i] = c;
return (st);
}

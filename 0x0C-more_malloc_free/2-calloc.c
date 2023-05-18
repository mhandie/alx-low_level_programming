#include <stdlib.h>
#include "main.h"
/**
 * *_memset - memory
 * @s: memory
 * @b: char
 * @n: times to copy
 *
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int k;

for (k = 0; k < n; k++)
{
s[k] = b;
}
return (s);
}
/**
 * *_calloc - allocates memory
 * @nmemb: elements
 * @size: size of elements
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *pntr;
if (nmemb == 0 || size == 0)
return (NULL);
pntr = malloc(size * nmemb);
if (pntr == NULL)
return (NULL);
_memset(pntr, 0, nmemb * size);
return (pntr);
}

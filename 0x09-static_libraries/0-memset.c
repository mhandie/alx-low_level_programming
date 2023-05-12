#include "main.h"
/**
 * _memset - function
 * @n:bytes of the memory
 * @s: area pointed
 * @b: constant byte
 * Return: 0 or new value
 */
char *_memset(char *s, char b, unsigned int n)
{
int a = 0;
for (; n > 0; a++)
{
s[a] = b;
n--;
}
return (s);
}

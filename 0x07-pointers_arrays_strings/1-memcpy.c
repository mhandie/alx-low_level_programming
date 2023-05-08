#include "main.h"
/**
 *_memcpy - copies memory area
 *@dest: memory store
 *@src: memory copied
 *@n: number of bytes
 *
 *Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int x = 0;
int a = n;
for (; x < a; x++)
{
dest[x] = src[x];
n--;
}
return (dest);
}

#include "main.h"
#include <stdio.h>
/**
 * _strcpy- function copies
 * @dest: the code
 * @char: char code
 * @src: the src code
 * Return: 0 success
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}

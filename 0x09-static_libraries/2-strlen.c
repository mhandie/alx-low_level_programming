#include "main.h"
#include <stdio.h>

/**
 * _strlen - strings in the code
 * @s: the strings
 * Return: 0 success
*/
int _strlen(char *s)
{
int length = 0;

while (*s != '\0')
{
length++;
s++;
}
return (length);
}

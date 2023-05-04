#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input
 * @src: value
 *
 * Return: 0
 */
char* _strcat(char* dest, const char* src)
{
char* ptr = dest;

while (*ptr != '\0')
{
ptr++;
}
while (*src != '\0')
{
*ptr++ = *src++;
}
*ptr = '\0';
return (dest);
}

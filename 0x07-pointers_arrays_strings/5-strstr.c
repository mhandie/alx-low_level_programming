#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: 0
*/
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *z = haystack;
char *p = needle;

while (z == *p && *p != '\0')
{
z++;
p++;
}
if (*p == '\0')
return (haystack);
}
return (0);
}

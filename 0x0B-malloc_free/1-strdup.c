#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
char *xyz;
int i, r = 0;
if (str == NULL)
return (NULL);
i = 0;
while (str[i] != '\0')
i++;
xyz= malloc(sizeof(char) * (i + 1));
if (xyz == NULL)
return (NULL);
for (r = 0; str[r]; r++)
xyz[r] = str[r];
return (xyz);
}

#include "main.h"
#include <stdio.h>
/**
 * _atoi- function copies
 * @s: the code
 * Return: 0
 */
int _atoi(char *s)
{
int sign = 1;
int num = 0;
int i = 0;
if (s[0] == '-')
{
sign = -1;
i++;
}
for (; s[i] != '\0'; i++)
{
if (s[i] < '0' || s[i] > '9')
break;
num = num * 10 + (s[i] - '0');
}
return (sign *num);
}

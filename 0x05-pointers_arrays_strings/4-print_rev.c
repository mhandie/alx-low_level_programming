#include "main.h"
#include <stdio.h>

/**
 * print_rev - print in reverse
 * @s: reversed string
 * Return: 0 success
 */
void print_rev(char *s)
{
int i, j;
i = 0;
while (s[i] != '\0')
{
i++;
}
for (j = i - 1; j >= 0; j--)
{
putchar(s[j]);
}
putchar('\n');
}

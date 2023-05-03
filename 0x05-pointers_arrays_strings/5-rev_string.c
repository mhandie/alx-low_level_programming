#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverse the code
 * @s: reversed code
 * Return: 0 success
 */
void rev_string(char *s)
{
int i, j;
char temp;
i = 0;
while (s[i] != '\0')
{
i++;
}
j = i - 1;
for (i = 0; i < j; i++, j--)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
}
}

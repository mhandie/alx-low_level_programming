#include "main.h"
/**
 * rev_string - reverse array
 * @n: integers
 * Return: 0
 */

void rev_string(char *n)
{
int a = 0;

int b = 0;

char temp;

while (*(n + a) != '\0')
{
a++;
}
a--;

for (b = 0; b < a; b++, a--)
{
temp = *(n + b);
*(n + b) = *(n + a);
*(n + a) = temp;
}
}

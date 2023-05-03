#include "main.h"
#include <stdio.h>
/**
 * puts_half- print half
 * @str: print half
 * Return: 0 success
 */
void puts_half(char *str)
{
int length = 0;
int i;
while (str[length] != '\0')
{
length++;
}
for (i = (length + 1) / 2; i < length; i++)
{
putchar(str[i]);
}
putchar('\n');
}

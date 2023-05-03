#include "main.h"
#include <stdio.h>
/**
 * puts2- strings the code
 * @s: strings code
 * Return: 0 success
 */
void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i += 2)
{
putchar(str[i]);
}
putchar('\n');
}

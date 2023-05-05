#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: 0
 */

void print_buffer(char *b, int size)
{
int o, d, y;

o = 0;

if (size <= 0)
{
printf("\n");
return;
}
while (o < size)
{
y = size - o < 10 ? size - o : 10;
printf("%08x: ", o);
for (d = 0; d < 10; d++)
{
if (d < y)
printf("%02x", *(b + o + d));
else
printf("  ");
if (d % 2)
{
printf(" ");
}
}
for (d = 0; d < y; d++)
{
int c = *(b + o + d);
if (c < 32 || c > 132)
{
c = '.';
}
printf("%c", c);
}
printf("\n");
o += 10;
}
}

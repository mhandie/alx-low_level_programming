#include "main.h"
#include <stdio.h>
/**
*
* @n: starting point
* print_to_98 - print
* Return: returns nothing
*
*/

void print_to_98(int n)

{
if (n <= 98)
{
for (n = n; n <= 97; n++)
printf("%d, ", n);
}
else
for (n = n; n > 98; n--)
printf("%d, ", n);
printf("98\n");
}

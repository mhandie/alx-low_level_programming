#include "main.h"
/**
* times_table - check description
* Description: It prints 9 times table starting with 0
* Return: 0.
*/
void times_table(void)
{
int a, m, n;
for (a = 0; a <= 9; a++)
for (m = 0; m <= 9; m++)
{
n = a * m;
if ((n / 10) == 0)
{
if (m != 0)
_putchar(' ');
_putchar(n + '0');
if (m == 9)
continue;
_putchar(',');
_putchar(' ');
}
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
if (m == 9)
continue;
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}

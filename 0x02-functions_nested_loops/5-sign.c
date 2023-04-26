#include "main.h"
/**
* print_sign - prints the sign of a numver
*
* @n: the int to check
*
*/

int print_sign(int n)

{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else if (n < 0)
{
_putchar('-');
}
return (-1);
}

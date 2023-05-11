#include "main.h"
/**
 * _sqrt_recursion - returns square root
 * @n: number of square root
 * actual_sqrt_recursion - root
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return(-1);
}
int actual_sqrt_recursion(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (actual_sqrt_recursion(n, i + 1));
}

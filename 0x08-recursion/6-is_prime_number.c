#include "main.h"
/**
 * is_prime_number - integer may be prime number
 * @n: number
 *
 * Return: 1 if prime number, 0 if not
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (actual_prime(n, n - 1));
}

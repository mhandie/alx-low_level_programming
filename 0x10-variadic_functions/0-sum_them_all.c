#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum of the paramters.
 * @n: number of paramters
 * @...: variable number of paramters
 *
 * Return: If n == 0 - 0.
 * Otherwise - sum of parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int x, sum = 0;
va_start(ap, n);
for (x = 0; x < n; x++)
sum += va_arg(ap, int);
va_end(ap);
return (sum);
}

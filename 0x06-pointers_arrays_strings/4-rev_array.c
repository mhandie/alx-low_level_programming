#include "main.h"
/**
 * reverse_array - reverse array
 * @a: array
 * @n: number of elements
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
int b;

int y;

for (b = 0; b < n--; b++)
{
y = a[b];
a[b] = a[n];
a[n] = y;
}
}

#include "main.h"
/**
 * flip_bits - returns the number of bit
 * @n: unsigned long int
 * @m: unsigned long int
 *
 * Return: 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, count = 0;

unsigned long int current;

unsigned long int exclusive = n ^ m;
for (i = 98; i >= 0; i--)
{
current = exclusive >> i;
if (current & 1)
count++;
}
return (count);
}

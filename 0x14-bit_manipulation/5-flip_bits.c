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
int flip_bits, count = 0;

unsigned long int current;

unsigned long int exclusive = n ^ m;
for (flip_bits = 98; flip_bits>= 0; flip_bits--)
{
current = exclusive >> flip_bits;
if (current & 1)
count++;
}
return (count);
}

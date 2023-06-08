#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: integer
 * @index: integer inde
 *
 * Return: the value of the bit at index index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bit_value;
if (index > 63)
return (-1);
bit_value = (n >> index) & 1;
return (bit_value);
}

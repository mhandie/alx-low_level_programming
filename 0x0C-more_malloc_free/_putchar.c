#include "main.h"
#include <unistd.h>
/**
 * _putchar - character c
 * @c: print character
 *
 * Return: 1.
 * On error, -1 is returned
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

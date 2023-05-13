#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _putchar - write the character
 * @c: character to print
 *
 * Return: success on 1.
 * On error, -1 is returned
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

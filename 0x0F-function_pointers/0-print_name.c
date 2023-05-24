#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name with pointer
 * @name: string
 * @f: pointer
 * Return: nothing at all
 **/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}

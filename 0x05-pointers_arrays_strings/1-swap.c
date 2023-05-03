#include "main.h"
#include "main.h"
#include <stdio.h>

/**
* 1-swap - swap the code
*
* Return: 0 success
*/
int main(void)
{
int a = 1;
int b = 2;

printf("Before swap: a = %d, b = %d\n", a, b);
swap_int(&a, &b);
printf("After swap: a = %d, b = %d\n", a, b);
return (0);
}

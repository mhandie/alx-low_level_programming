#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - Returns sum
 * @a: first number.
 * @b: second number.
 *
 * Return: sum of a and b.
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - Returns difference
 * @a: first number
 * @b: second number
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - Returns product of two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - Returns division
 * @a:first number.
 * @b: second number.
 *
 * Return: quotient of a and b.
 */
int op_div(int a, int b)
{
return (a / b);
}
/**
 * op_mod - Returns remainder
 * @a: first number.
 * @b: second number.
 *
 * Return: remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
return (a % b);
}

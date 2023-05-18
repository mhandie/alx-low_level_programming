#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"
/**
 * is_digit - checks string
 * @s: string to be evaluated
 *
 * Return: 0
 */
int is_digit(char *s)
{
int k = 0;
while (s[k])
{
if (s[k] < '0' || s[k] > '9')
return (0);
k++;
}
return (1);
}
/**
 * _strlen - returns length
 * @s: string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
int k = 0;
while (s[k] != '\0')
{
k++;
}
return (k);
}
/**
 * errors - handles errors
 */
void errors(void)
{
printf("Error\n");
exit(98);
}
/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
char *s1, *s2;
int lent1, lent2, lent, k, carry, num1, num2, *result, a = 0;
s1 = argv[1], s2 = argv[2];
if (argc != 3 || !is_num(s1) || !is_num(s2))
errors();
lent1 = _strlen(s1);
lent2 = _strlen(s2);
lent = lent1 + lent2 + 1;
result = malloc(sizeof(int) * lent);
if (!result)
return (1);
for (k = 0; k <= lent1 + lent2; k++)
result[k] = 0;
for (lent1 = lent1 - 1; lent1 >= 0; lent1--)
{
num1 = s1[lent1] - '0';
carry = 0;
for (lent2 = _strlen(s2) - 1; lent2 >= 0; lent2--)
{
num2 = s2[lent2] - '0';
carry += result[lent1 + lent2 + 1] + (num1 *num2);
result[lent1 + lent2 + 1] = carry % 10;
carry /= 10;
}
if (carry > 0)
result[lent1 + lent2 + 1] += carry;
}
for (k = 0; k < lent - 1; k++)
{
if (result[k])
a = 1;
if (a)
_putchar(result[k] + '0');
}
if (!a)
_putchar('0');
_putchar('\n');
free(result);
return (0);
}

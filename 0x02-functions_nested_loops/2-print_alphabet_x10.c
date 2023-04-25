#include "main.h"

/**
 * main - check the code.
 *prints 10 times the alphabet, in lowercase, followed by a new line
 * Return: Always 0.
 */

void print_alphabet_x10(void)

{
char ch;
int i;
i = 0;
while (i < 10)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
i++;
}

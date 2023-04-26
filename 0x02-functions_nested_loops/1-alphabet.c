#include "main.h"
/**
* print_alphabet_10x - printing lower alphabets 10 times
*
* Return: nothing
*/
void print_alphabet_x10(void)
{
char bets;
int n = 0;

while (n++ <= 9)
{
for (bets = ‘a’; bets <= ‘z’; bets++)
_putchar(bets);
_putchar(‘\n’);
}
}

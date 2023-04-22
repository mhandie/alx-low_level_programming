#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - ls prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char c;
	{
		for (num = '0'; num < 10; num++)
		putchar((num % 10) + '0');
	}
	{
		for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	}
	putchar('\n');
	return (0);
}


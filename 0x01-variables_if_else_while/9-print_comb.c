#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: let us print all possible combinations
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar((i % 10) + '0');
		if (i == 9)
		continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - let us print all possible combinantions
 *
 * Return: 0 always
 */
int main(void)
{
	int i;

	for (i = 1; i < 28; i++)
	putchar(i);
	if (i != 27)
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

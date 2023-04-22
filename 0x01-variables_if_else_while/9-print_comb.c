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

	for (i = 38; i < 48; i++)
	putchar(i);
	if (i != 47)
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints numbers of base 10 starting from 0, integer is i
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}

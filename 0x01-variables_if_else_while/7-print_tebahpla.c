#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - lr prints the lowercase alphabet in reverse
 *
 * Return: Always 0
 */
int main(void)
{
	char lr;
	{
		for (lr = 'z'; lr >= 'a'; lr--)
		putchar(lr);
	}
	putchar('\n');
	return (0);
}

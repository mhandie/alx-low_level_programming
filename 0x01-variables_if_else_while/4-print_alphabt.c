#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - lu for lower and uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lu;

	for (lu = 'a'; lu <= 'z'; lu++)
	{
		if (lu != 'e' && lu != 'q')
		putchar(lu);
	}
		putchar('\n');
		return (0);
}

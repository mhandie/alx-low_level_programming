#include "main.h"
/**
 * is_palindrome - checks if a string
 * _strlen_recursion - returns the length of a string
 * @s: string reverse
 * check_pal - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if not 0
 */
int is_palindrome(char *s)
{
if (*s == 0)
return (1);
}
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
}
int check_pal(char *s, int i, int len)
{
if (*(s + i) != *(s + len - 1))
return (0);
}

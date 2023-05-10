#include "main.h"
/**
 * is_palindrome - checks if a string
 * @s: string reverse
 *
 * Return: 1 if not 0
 */
int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (check_pal(s, 0, _strlen_recursion(s)));
}

#include "main.h"

/**
 * cap_string - Capitalizes all words of string.
 * @str: The string is to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
int cap_next = 1;
char *p = str;
while (*p != '\0')
{
if (*p == ' ' || *p == '\t' || *p == '\n' ||
*p == ',' || *p == ';' || *p == '.' || *p == '!' || *p == '?' ||
*p == '"' || *p == '(' || *p == ')' || *p == '{' || *p == '}')
{
cap_next = 1;
}
else if (cap_next)
if (*p >= 'a' && *p <= 'z')
{
*p -= 32;
}
cap_next = 0;
}
p++;
}
return (str);
}

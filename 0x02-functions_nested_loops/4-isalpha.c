#include "main.h"
/**
* _isalpha - Checks for alphabetic order
*
* @c: alpabet to check for order
*
* Return: 1 if c is a letter, otherwise 0
*/
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

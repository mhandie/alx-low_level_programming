#include <stdlib.h>
#include "main.h"
/**
 *  * count_word - number of words
 *   * @s: string
 *    *
 *     * Return: number
 *      */
int count_word(char *s)
{
int flag, x, y;
flag = 0;
y = 0;
for (x = 0; s[x] != '\0'; x++)
{
if (s[x] == ' ')
flag = 0;
else if (flag == 0)
{
flag = 1;
y++;
}
}
return (y);
}
/**
* **strtow - splits a string
* @str: string
*
* Return: success or Null
*/
char **strtow(char *str)
{
char **matrix, *tmp;
int i, w = 0, len = 0, words, x = 0, start, end;
while (*(str + len))
len++;
words = count_word(str);
if (words == 0)
return (NULL);
matrix = (char **) malloc(sizeof(char *) * (words + 1));
if (matrix == NULL)
return (NULL);
for (i = 0; i <= len; i++)

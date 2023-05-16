#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop
 * @width: width
* @height: height
 * Return: 2
 */
int **alloc_grid(int width, int height)
{
int **abc;
int i, j;
if (width <= 0 || height <= 0)
return (NULL);
abc= malloc(sizeof(int *) * height);
if (abc == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
abc[i] = malloc(sizeof(int) * width);
if (abc[i] == NULL)
{
for (; i >= 0; i--)
free(abc[i]);
free(abc);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
abc[i][j] = 0;
}
return (abc);
}

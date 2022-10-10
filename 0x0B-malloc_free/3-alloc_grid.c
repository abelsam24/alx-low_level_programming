#include "main.h"
/**
 * alloc_grid - function returns a pointer to 2 dimensional array
 * @height: height of the 2d array
 * @width: width of the 2d array
 * Return: array pointer
 */
int **alloc_grid(int width, int height)
{
		int i, j;
		int **a;

		if (height <= 0 || width <= 0)
		{
		return (NULL);
		}
		a = malloc(sizeof(int *) * height);
		if (a == NULL)
		{
		return (NULL);
		}
		for (i = 0; i < height; i++)
		{
		a[i] = malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
		for (j = 0; j < width; j++)
		{
		free(a[j]);
		}
		free(a);
		}
		}
		return (a);
}

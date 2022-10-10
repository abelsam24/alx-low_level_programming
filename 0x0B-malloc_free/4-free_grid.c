#include "main.h"
/**
 * free_grid - a function to free allocated space
 * @grid: - pointer to previous function
 * @height: - the height of the array
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
		int i;

		for (i = 0; i < height; i++)
		free(grid[i]);
		free(grid);
}

#include "holberton.h"
#include <stdlib>
/**
 * free_grid - adds postive numbers
 * @g: pointer to grid
 * @h: # of rows of the grid
 * Return: the sum
 */
void free_grid(int **g, int h)
{
	for (h = h - 1; h >= 0; h--)
		free(*(*g + h));
	free(grid);
}

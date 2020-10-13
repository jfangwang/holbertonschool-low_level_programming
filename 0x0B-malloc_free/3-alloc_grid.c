#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* alloc_grid -  a
* @width:a
* @height:  a
* Return: a
*/

int **alloc_grid(int width, int height)
{
	int **d;
	int h_ind = 0;
	int w_ind = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	d = malloc(sizeof(int *) * height);
	if (d == NULL)
		return (NULL);
	for (h_ind = 0; h_ind < height; h_ind++)
	{
		d[h_ind] = malloc(sizeof(int) * width);
		if (d[h_ind] == NULL)
		{
			while (h_ind >= 0)
			{
				free(d[h_ind]);
				h_ind--;
			}
			free(d);
			return (NULL);
		}
	}
	for (h_ind = 0; h_ind < height; h_ind++)
	{
		for (w_ind = 0; w_ind < width; w_ind++)
			d[h_ind][w_ind] = 0;
	printf("h_ind: %d", h_ind);
	}
	return (d);
}

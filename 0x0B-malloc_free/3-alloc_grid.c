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

	/* Null if under 0 */
	if (width <= 0 || height <= 0)
		return (NULL);
	/* allocate memory for w * h array */
	d = malloc(sizeof(int *) * height);
	/* checks if allocated space is null */
	if (d == NULL)
		return (NULL);
	/* Fun begins, iterates through height */
	for (h_ind = 0; h_ind < height; h_ind++)
	{
		/* Allocate space width at given height */
		d[h_ind] = malloc(sizeof(int) * width);
		/* checks if index of given width is null */
		if (d[h_ind] == NULL)
		{
			/* if its null, use free() */
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
	}
	return (d);
}

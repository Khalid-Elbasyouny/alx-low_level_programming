#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * **alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers.
 *
 * @width: width
 * @height: height
 *
 * Return: 0 (sucesss)
 *
*/
int **alloc_grid(int width, int height)
{
	int **mtd, i, j;

	mtd = malloc(sizeof(*mtd) * height);
	if (width <= 0 || height <= 0 || mtd == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			mtd[i] = malloc(sizeof(**mtd) * width);
			if (mtd[i] == 0)
			{
				while (i--)
					free(mtd[i]);
				free(mtd);
				return (0);
			}
			for ( j = 0; j < width; j++)
				mtd[i][j] = 0;
		}
	}
	return (mtd);
}

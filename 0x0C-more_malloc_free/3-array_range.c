#include"main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *array_range - make  memory for an array
 * @min: int type
 * @max: int type
 * Return:  return pointer to array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int n;
	int i = 0;

	if (min > max)
		return (NULL);

	n = (max - min) + 1;
	ptr = malloc(n * sizeof(int));

	if (ptr == NULL)
		return(NULL);

	for (i = 0; i < n; i++)
	{
		ptr[i] = min;
		min++;
	}

	return (ptr);
}

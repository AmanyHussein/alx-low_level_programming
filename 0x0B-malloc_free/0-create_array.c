#include"main.h"
#include <stdlib.h>

/*
 * create array- creates  an array of chars, and initializes it with a specific char.
 * @size:function paramters an integer
 * @c: function paramter a chracter
 * Return: a single character
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);
	
	ar = malloc(size * sizeof(*ar));
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ar[i] = c;
	
	return (ar);

}

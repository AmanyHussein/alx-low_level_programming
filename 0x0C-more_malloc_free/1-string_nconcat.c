#include"main.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * string_nconcat - function to concatnate strings with n bytes
 * @s1: destination for concatnation
 * @s2: source of string
 * @n: int type for size of byte
 * Return: pointer to new memory allocated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *con;
       	int size1, size2, size;
	int i = 0;
	int j = 0;
	int k = 0;
	int c = 0;
	int flag = n;

	if (s1 == NULL)
		s1 = "";

	while (s1[i] != '\0')
	{
		i++;
		size1++;
	}

	if (s2 == NULL)
		s2 = "";

	while (s2[j] != '\0')
	{
		if (j <= flag)
		{
			j++;
			size2++;
		}
	}

	size = size1 + size2 + 1;
	con = malloc(size * sizeof(char));

	if (con == NULL)
		return (NULL);

	for (k = 0; k <= size1; k++)
	{
		con[k] = s1[k];
	}

	for (c = 0; c < flag; c++)
	{
		con[k++] = s2[c];
	}
	con[k++] = '\0';

	return (con);

}

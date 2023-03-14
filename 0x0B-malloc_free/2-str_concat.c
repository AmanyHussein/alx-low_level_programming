#include"main.h"
#include<stdlib.h>

/**
 * str_concat - concatenates two strings 
 * @s1: string 1 to concatenate
 * @s2: string 2 to concatenate
 * Return: Pointer to a the new string or null
 */

char *str_concat(char *s1, char *s2)
{
	char *con;
	int size = 0;
	int j = 0;
	int i = 0;
	int k = 0;
	int s = 0;
	int d = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		size++;
		i++;
	}

	size++;

	while (s2[j] != '\0')
	{
		size++;
		j++;
	}

	s = i + j + 1;
	con = malloc(s * sizeof(*con));

	if (con == NULL)
		return (NULL);

	for (k = 0, d = 0; k < (i + j + 1); k++)
	{
		if (k < i)
			con[k] = s1[k];
		else
			con[k] = s2[d++];
	}

	return (con);
}

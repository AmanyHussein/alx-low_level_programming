#include"main.h"
#include<stdlib.h>

/**
 * _strdup-  returns a pointer to a newly allocated space in memory
 * @str: string to be copied
 * Return: a char pointer to malloc created memory address or NULL if error
 */

char *_strdup(char *str)
{
	char *copy;
	int size = 0;
	int i = 0;
	
	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		size++;
		i++;
	}

	copy = malloc((size + 1) * sizeof(*str));
	for (i = 0; i <= size; i++)
	       copy[i] = str[i];

	if (copy == NULL)
		return (NULL);

	return (copy);

}

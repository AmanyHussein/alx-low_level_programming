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
	int c, counter1;
	int flag = n;
	char *ptr;
	int len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	if (flag >= len2)
	{
		flag = len2;
		ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	}
	else
		ptr = malloc(sizeof(char) * (len1 + n + 1));
	if (ptr == NULL)
		return (NULL);
	for (c = 0; c < len1; c++)
	{
		ptr[c] = s1[c];
	}
	for (counter1 = 0; counter1 < flag; counter1++)
	{
		ptr[c++] = s2[counter1];
	}
	ptr[c++] = '\0';
	return (ptr);
}

#include"main.h"
/**
 * _strncpy - copies a string up to n
 * @dest: Destination of the pointer to the string
 * @src: Source of the pointer to the string to copy
 * @n: Number of bytes to copy.
 * Return: Pointer to the destination string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int c;

	for (c = 0; src[c] != '\0' && c < n; c++)
		dest[c] = src[c];
	while (c < n)
		dest[c++] = '\0';
	return (dest);
}

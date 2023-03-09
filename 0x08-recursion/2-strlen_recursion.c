#include"main.h"

/**
 * _strlen_recursion in reverse- returns the length of a string
 * @s: string
 * return: integer number
 */
int _strlen_recursion(char *s)
{
	int n = 1;

	if (*s != '\0')
		return (n + _strlen_recursion(s + 1));

	else
		return (0);
}

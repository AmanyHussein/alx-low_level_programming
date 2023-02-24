#include"main.h"

/**
 * _isdigit- check description
 * @c - input integer character 
 * description: checks for a digit from 0-9
 * Return: 1 if c is digit, 0 otherwise.
 */
int _isdigit(int c)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}

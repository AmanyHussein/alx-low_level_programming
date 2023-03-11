#include"main.h"

/**
 * _isupper-Check description
 * @c- input number of type integer
 * Description: checks for uppercase character
 * Return: 1 in case input c is an uppercase, 0 otherwise
 */
int _isupper(int c)
{
	int i; 

	for (i = 65; i <= 90; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}

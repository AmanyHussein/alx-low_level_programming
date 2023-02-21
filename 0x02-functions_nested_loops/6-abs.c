#include"main.h"

/**
 * _abs: check description
 * @n: An nput number
 * description: computes the absolute value of an integer
 * return : integer value
 */
int _abs(int n)
{
	if ( n >= 0)
		return (n);
	else
	{
		n *= -1;
		return (n);
	}
}

#include"main.h"

/**
 * print_diagonal- check description
 * @n - input character - number of / character
 * description: print a diagonal line
 * return: nothing
 */
void print_diagonal(int n)
{
	int i;
	
	if( n > 0)
	{
		for (i = 0; i < n; i++)
		{
			int j;
			for (j = 0; j < n; j++)
			{
				if (i == j)
				{
					_putchar(92);
					break;
				}
				else
					_putchar(32);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

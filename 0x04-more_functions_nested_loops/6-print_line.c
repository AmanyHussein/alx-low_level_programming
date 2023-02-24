#include"main.h"

/**
 * print_line - check description
 * @n - input character - number of characters
 * description: draws a straight line in the terminal
 * return: nothing
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}

#include"main.h"

/**
 * print_square- check description
 * @size- input intger the length of the square
 * description: prints a square, followed by a new line
 * return: nothing
 */
void print_square(int size)
{
	int i;

	for ( i=0; i < size; i++)
	{
		int j;

		for ( j = 0; j < size; j++)
			_putchar(35);
		_putchar('\n');
	}
	if ( size <= 0)
		_putchar('\n');
}

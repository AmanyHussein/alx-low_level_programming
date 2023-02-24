#include"main.h"

/** 
 * print_triangle- check description 
 * @size - integer value size of triangle
 * desription: prints a triangle
 * return: nothing
 */
void print_triangle(int size)
{
	int i;
	for (i = 1; i <= size; i++)
	{
		int j;
		
		for (j = i; j < size; j++)
			_putchar(32);
		for (j = 1; j <= i; j++)
			_putchar(35);
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}

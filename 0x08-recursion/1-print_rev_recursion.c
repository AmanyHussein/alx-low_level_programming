#include"main.h"
/**
 * _print_rev__recursion - Print a reversed string
 * @s: string
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s+1);
		_putchar(*s);
	}
		
	return;
}

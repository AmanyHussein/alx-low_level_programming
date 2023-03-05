#include"main.h"
/**
 * print_rev - prints a string, followed by a new line.
 * @s: input string to print.
 */
void print_rev(char *s)
{
	int len = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}

	while (len >= 0)
	{
		_putchar(s[i]);
		i--;
		len--;
	}
	_putchar('\n');
}

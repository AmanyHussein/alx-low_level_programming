#include"main.h"

/**
 * _puts_recursion - check the description
 * @s- array of characters
 * description: prints a string, followed by a new line.
 * Return: nothing.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}

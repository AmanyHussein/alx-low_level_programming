#include<unistd.h>
#include"main.h"

/**
 * print_alphabet:Check description
 * Description: prints the alphabet, in lowercase, followed by a new line
 * Return: nothing.
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');
}

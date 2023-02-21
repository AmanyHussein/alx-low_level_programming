#include"main.h"

/**
 * _islower - Check description
 * @c: An input character
 * Description: checks for lower case characters.
 * Return: 1 if c is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	char alpha;
	int lower = 0;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (c == alpha)
			lower = 1;
	}
	return (lower);
}

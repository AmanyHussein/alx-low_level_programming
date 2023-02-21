#include"main.h"

/**
 * _isalpha - Check description
 * @c: An input character
 * Description: checks for alphabetic character.
 * Return: 1 if c is a lteer (lower or upper), 0 otherwise.
 */
int _isalpha(int c)
{
        char alpha1;
	char alpha2;
        int letter = 0;

        for (alpha1 = 'a'; alpha1 <= 'z'; alpha1++)
        {
                if (c == alpha1)
                        letter = 1;
        }
	for (alpha2 = 'A'; alpha2 <= 'Z'; alpha2++)
	{
		if (c == alpha2)
			letter = 1;
	}
        return (letter);
}

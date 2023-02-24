#include"main.h"

/**
 * more_numbers- check description
 * description: print 10 times the numbers from 0-14 followed by a new line
 * return: nothing
 */
void more_numbers(void)
{
	int j;
	char nums[] = "01234567891011121314";
	for (j = 0; j <= 9; j++)
	{
		int i;

		for (i = 0; i < 20;i++)
			_putchar(nums[i]);
		_putchar('\n');
	}
	
}

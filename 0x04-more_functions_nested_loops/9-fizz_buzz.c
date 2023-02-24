#include<stdio.h>
#include"main.h"

/** main -check description
 * description: main fucntion to run the program
 * return : always 0
 */
int main(void)
{
	int i;
	for (i = 1; i <= 100; i++)
	{
		if ( i % 3 == 0)
		{
			if ( i % 5 == 0)
				printf("FizzBuzz ");
			else
				printf("Fizz ");
		}
		else if ( i % 5 == 0)
			printf("Buzz ");
		else
		       	printf("%d ",i);
	}
	_putchar('\n');
	return (0);
}

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
			{
				printf("FizzBuzz");
				printf(" ");
			}
			else
			{
				printf("Fizz");
				printf(" ");
			}
		}
		else if ( i % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else
		{
		       	printf("%d ",i);
			printf(" ");
		}
	}
	return (0);
}

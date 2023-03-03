#include<stdio.h>
#include<stdlib.h>

int main (void)
{
	int a = 48;
	int alpha = 97;

	while (a < 58)
	{
		putchar(a);
		a++;
	}
	while (alpha <=102)
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}

#include<stdio.h>
#include<stdlib.h>
int main (void)
{
	int alpha = 97;
	int a = 65;

	while (alpha <= 122)
	{
		putchar(alpha);
		alpha++;
	}
	while ( a <= 90)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return 0;
}

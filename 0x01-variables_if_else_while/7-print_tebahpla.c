#include<stdlib.h>
#include<stdio.h>

int main (void)
{
	int alpha = 122;

	while (alpha >= 97)
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return 0;
}

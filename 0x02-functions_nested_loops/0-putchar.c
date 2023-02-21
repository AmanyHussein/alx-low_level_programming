#include<stdio.h>
#include"main.h"

/**
 * main-Check description
 * Description: Prints _putchar using putchar function followed by a new line
 *Returns:0
 */
int main(void)
{
	char word[] = "_putchar";
	int i;
	for(i=0;i<=7;i++)
		_putchar(word[i]);
	_putchar('\n');

	return (0);
}

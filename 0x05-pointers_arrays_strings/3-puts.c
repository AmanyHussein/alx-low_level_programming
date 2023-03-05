#include"main.h"
void _puts(char *str)
{
	int i = 0;
	
	while (str[i] != '\0')
	{
		char l;
		l = str[i];
		_putchar(l);
		i++;
	}
	_putchar('\n');

}

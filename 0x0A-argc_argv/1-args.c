#include"main.h"
#include<stdio.h>

/**
 * main - print the number of arguments passed followed by a new line
 * @argc: argument count
 * @argv: arguments passed to main as an array of strings
 * Return: 0
 */

int main(int argc, char* argv[])
{
	(void) argv;

	printf("%d\n",argc - 1);

	return (0);
}

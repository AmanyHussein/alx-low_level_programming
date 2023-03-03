#include"main.h"

/**
 * print_last_digit -  check description
 * @n - input number
 * desciption:  prints the last digit of a number
 * Return: intger number which is the last digit of input
 */
 int print_last_digit(int n)
{
	int digit = n%10;
	_putchar(digit);
	return (digit);
}

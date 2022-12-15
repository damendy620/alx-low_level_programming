#include "main.h"
/**
 * print_last_digit - print lastdigit of number
 * @t: parameter integer
 *
 * Return: the last digit
 */
int print_last_digit(int t)
{
	int n = t % 10;

	if (n < 0)
	{
		n *= -1;
	}
	_putchar(n + '0');
	return (n);
}

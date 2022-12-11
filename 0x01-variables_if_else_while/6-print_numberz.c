#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 Success
 */
int main(void)
{
	int digit_base_ten;

	digit_base_ten = 0;

	while (digit_base_ten < 10)
	{
		putchar((digit_base_ten % 10) + '0');
		digit_base_ten++;
	}

	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 Success
 */
int main(void)
{
	int my_number;

	for (my_number = 0; my_number <= 9; my_number++)
	{
		putchar((my_number % 10) + '0');
		if (my_number != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 success
 */
int main(void)
{
	char alpha_charac = 'z';

	while (alpha_charac >= 'a')
	{
		putchar(alpha_charac);
		alpha_charac--;
	}
	putchar('\n');
	return (0);
}

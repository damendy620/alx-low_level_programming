#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 Success
 */
int main(void)
{
	char low_charac;

	for (low_charac = 'a'; low_charac <= 'z'; low_charac++)
	{
		if (low_charac != 'q' && low_charac != 'e')
		{
			putchar(low_charac);
		}
	}
	putchar('\n');
	return (0);
}

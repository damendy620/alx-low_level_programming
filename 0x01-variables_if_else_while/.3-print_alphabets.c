#include <stdio.h>

/**
 * main - Entry point
 *
 *Return: Always 0 success
 */
int main(void)
{
	char lower_ch;
	char upper_ch;

	lower_ch = 'a';

	while (lower_ch <= 'z')
	{
		putchar(lower_ch);
		lower_ch++;
	}
	for (upper_ch = 'A'; upper_ch <= 'Z'; upper_ch++)
	{
		putchar(upper_ch);
	}
	putchar('\n');

	return (0);
}

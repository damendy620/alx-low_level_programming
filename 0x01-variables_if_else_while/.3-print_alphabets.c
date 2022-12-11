#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 Success
 */
int main(void)
{
	char lowcharact;
	char upcharact;

	for (lowcharact = 'a'; lowcharact <= 'z'; lowcharact++)
	{
		putchar(lowcharact);
	}
	for (upcharact = 'A'; upcharact <= 'Z'; upcharact++)
	{
		putchar(upcharact);
	}
	putchar('\n');
	return (0);
}


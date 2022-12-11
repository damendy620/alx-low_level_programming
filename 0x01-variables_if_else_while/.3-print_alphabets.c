#include<stdio.h>
/**
 * main - entry point
 *
 * Return: Always(0) Success
 */
int main(void)
{
	char lowercharac;
	char uppercharac;

	for (lowercharac = 'a'; lowercharac <= 'z'; lowercharac++)
	{
		putchar(lowercharac);
	}
	for (uppercharac = 'A'; uppercharac <= 'Z'; uppercharac++)
	{
		putchar(uppercharac);
	}
	putchar('\n');
	return (0);
}


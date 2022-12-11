#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 Success
 */
int main(void)
{
	int base_sizteen_inte;
	char base_sizteen;

	for (base_sizteen_inte = 0; base_sizteen_inte <= 9; base_sizteen_inte++)
	{
		putchar((base_sizteen_inte % 10) + '0');
	}
	for (base_sizteen = 'a'; base_sizteen <= 'f'; base_sizteen++)
	{
		putchar(base_sizteen);
	}
	putchar('\n');
	return (0);
}


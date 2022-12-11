#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 Success
 */
int main(void)
{
	int base_sizteen_inte;
	char base_sizteen_chare;

	for (base_sizteen_inte = 0; base_sizteen_inte <= 9; base_sizteen_inte++)
	{
		putchar((base_sizteen_inte % 10) + '0');
	}
	for (base_sizteen_chare = 'a'; base_sizteen_chare <= 'f'; base_sizteen_chare++)
	{
		putchar(base_sizteen_chare);
	}
	putchar('\n');
	return (0);
}


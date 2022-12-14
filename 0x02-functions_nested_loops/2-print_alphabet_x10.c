#include "main.h"

/**
 * print_alphabet_x10 - print ten times the alphabet character
 */

void print_alphabet_x10(void)
{
	int digit_to_ten = 0;

	while (digit_to_ten < 10)
	{
		char alpha;

		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}

		_putchar('\n');
		digit_to_ten++;
	}
}

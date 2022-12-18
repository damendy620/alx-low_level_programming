#include "main.h"

/**
  * more_numbers - prints numbers ten times
  */
void more_numbers(void)
{
	int num, times;

	for (times = 0; times < 10; times++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 0 && num <= 9)
			{
				_putchar((num % 10) + '0');
			}
			else
			{
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
			}
		}
		_putchar('\n');
	}
	if (times != 10)
	{
	_putchar('\n');
	}

}

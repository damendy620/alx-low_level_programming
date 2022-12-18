#include "main.h"

/**
 * times_table - print nine time table
 */
void times_table(void){
	int n, t, times;

	for (n = 0; n <= 9; n++)
	{
		for (t = 0; t <= 9; t++)
		{
			times = n * t;
			if (times > 9)
			{
				_putchar((times % 10) + '0');
			}
			else
			{
				_putchar((times / 10) + '0');
				_putchar((times % 10) + '0');
			}
		}
		_putchar('\n');
	}	
}

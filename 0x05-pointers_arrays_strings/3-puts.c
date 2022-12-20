#include "main.h"

/**
 * _puts - print string followed by new line
 * @str: here the params
 */
void _puts(char *str)
{
	int num = 0;

	while (num >= 0)
	{
		if (str[num] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[num]);
		num++;
	}
}

#include "main.h"

/**
 * puts_half - will print half of string
 * @str: string params
 */
void puts_half(char *str)
{
	int i, j, size, start;

	i = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}

	size = i;
	if (size % 2 == 0)
	{
		start = size / 2;
	}
	else
	{
		start = (size - 1) / 2;
	}
	j = size - start;

	while (*(str + j) != '\0')
	{
		_putchar(*(str + j));
		j++;
	}
	_putchar('\n');
}

#include "main.h"

/**
 * rev_string - will reverse a string
 * @s: param variable
 */
void rev_string(char *s)
{
	int val, j;
	char a;

	val = 0;
	while (*(s + val) != '\0')
	{
		val++;
	}
	for (j = 0; j < (val / 2); j++)
	{
		a = *(s + j);
		*(s + j) = *(s + val - j - 1);
		*(s + val - j - 1) = a;
	}
}

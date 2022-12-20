#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements of an array
 * @a: first variable param
 * @n: the second variable param
 */
void print_array(int *a, int n)
{
	int i, m;

	m = n - 1;
	for (i = 0; i <= m; i++)
	{
		printf("%d", a[i]);
		if (i < m)
		{
			printf(", ");
		}
	}
	printf("\n");
}

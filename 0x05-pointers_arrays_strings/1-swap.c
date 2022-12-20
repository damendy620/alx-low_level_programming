#include "main.h"
/**
 * swap_int - is to swap integer
 * @a: first params interger
 * @b: second params
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

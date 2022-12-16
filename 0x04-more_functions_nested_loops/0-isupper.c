#include "main.h"
/**
 * _isupper - check for upper character
 * @c: is the character param
 *
 * Return: 1 if c is upper
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

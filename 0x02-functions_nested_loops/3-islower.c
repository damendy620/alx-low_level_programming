#include "main.h"
/**
 * _islower - will check if is lower
 * @c: the characacter
 *
 * Return: 1 if the character is lower
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

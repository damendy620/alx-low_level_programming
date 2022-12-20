#include "main.h"

/**
 * _strlen - return the lenght of str
 * @s: param string
 *
 * Return: lenght of string
 */
int _strlen(char *s)
{
	int num = 0;

	while (*(s + num) != '\0')
	{
		num++;
	}
	return (num);
}

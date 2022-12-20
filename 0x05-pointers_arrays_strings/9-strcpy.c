#include "main.h"
#include <stdio.h>

/**
 * _strcpy -print copy the string pointed by
 * @dest: destination array to point
 * @src: source array
 * Return: the destination
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}

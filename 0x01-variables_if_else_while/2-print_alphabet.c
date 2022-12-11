#include<stdio.h>
/**
 * main - entry point
 *
 * Return: Always(0) Success
 */
int main(void)
{
	char loweralpha;
	
	loweralpha = "a";
	for (loweralpha = "a"; loweralpha <= "z"; loweralpha++)
	{
		putchar(loweralpha);
		putchar("\n");
	}
	return (0);
}

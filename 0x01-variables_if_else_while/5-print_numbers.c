#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 Success
 */
int main(void)
{
	int digit_num;

	digit_num = 0;
	while (digit_num < 10)
	{
		printf("%d", digit_num);
		digit_num++;
	}
	printf("\n");
	return (0);
}

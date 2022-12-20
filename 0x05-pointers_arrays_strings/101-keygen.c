#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - creates a password
 *
 * Return:0;
 */
int main(void)
{
	int keynumber, symbol, checksum;

	srand(time(NULL));
	checksum = 2764;
	keynumber = 0;

	while (keynumber < (checksum - 105))
	{
		symbol = (rand() % (105 - 97 + 1)) + 97;/*to print mostly lowercaseletters*/
		printf("%c", symbol);
		keynumber = keynumber + symbol;
	}

	symbol = checksum - keynumber;
	printf("%c", symbol);

	return (0);
}

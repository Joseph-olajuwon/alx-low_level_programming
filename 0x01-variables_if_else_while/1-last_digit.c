#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: get the last digit of the number
 * Return: always 0 (Success)
 */
int main(void)
{
	int n, digits;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digits = n % 10;
	if (digits > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, digits);
	}
	else if (digits == 0)
	{
		printf("Last digits of %d is %d and is 0\n", n, digits);
	}
	else
	{
		printf("Last digits of %d is %d is and less than 6 and not 0\n", n, digits);
	} return (0);
}

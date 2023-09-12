#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - this is a function to generate a random number
 *Description: Get a random number and check its last digits, compare with 5
 *Return: 0
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));	
	n = rand() - RAND_MAX / 2;
	m = n % 10;

	if (m > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, m);
	}
	else if (m < 6 && m != 0)
	{
	printf("Last digit of %d is %d and less tahn 6 and not 0\n", n, m);
	}
	else
	{
	printf("Last digit of %d is %d and is 0\n", n, m);
	}
	return (0);
}

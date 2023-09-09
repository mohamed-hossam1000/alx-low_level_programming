#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - fu
 * Return: 0
 */
int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	printf("Last digit of %i is %i", n, l);
	if (l > 5)
		printf(" and is greater than 5");
	if (l == 0)
		printf(" and is 0");
	else if (l < 6)
		printf(" and is less than 6 and not 0");
	printf("\n");
	return (0);
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -> This program will assign a random number to the variable
 * to know
 * Return : always 0
 */
int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	printf("%d is positive\n", n);
	if (n == 0)
	printf("%d is zero\n");
	if (n < 0)
	printf("%d is negative\n");
	return (0);
}

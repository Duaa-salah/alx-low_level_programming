#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Describtion: get a random number and print variable
 * and declare if the number is posite, negative, or zero
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)	
		printf("%d is negative\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}

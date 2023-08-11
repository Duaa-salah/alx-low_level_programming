#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* 
 * main - main block
 * Description: see the last digit of n is 5, or zero , or less than 6 and not zero
 * Return: 0
*/
int main(void)
{
	int n;
	int r;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	r = n % 10;

	if (r > 5)
		printf("Last digit of %d is %d and is greater than 5\n",
		       n, r);
	else if (r == 0)
		printf("last digit of %d is %d and and is 0\n", n, r);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
		       n, r);

	return (0);
}

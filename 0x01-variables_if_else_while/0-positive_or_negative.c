#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Task 0 positive and negative
 * Return: 0
 */
int main(void)
{
	int n;
	srand(tiime(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		prinf("%d is positive\n", n);
	else if (n > 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n");
	return (0);

}

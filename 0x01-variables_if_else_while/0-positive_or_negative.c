#include <stdlib.h>
#include <time.h>
/**
 * main - print a random
 * Return: 0 sucsses
 */
int main(void)

{
	int n;

	n = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		prinf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n");
	}
	return (0);

}

#include <stdio.h>
/**
 * main - printing upper and lowercase
 *
 * Return: 0
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		putchar(alph);

	putchar('\n');

	char ALPH;

	for (ALPH = 'A'; ALPH <= 'Z'; ALPH++)
		putchar(ALPH);
	putchar('\n');

		return (0);
}

#include "main.h"

/**
 * _islower - Check for lowercase letter
 * @c: Also check for this
 * Return: 1 for lowercase 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

#include "main.h"
/**
 *int _islower(int c) - check for lowercase letter
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

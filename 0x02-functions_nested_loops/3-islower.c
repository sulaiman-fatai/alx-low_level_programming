#include "main.h"
/**
 * _islower It checks for lowercase
 * returns : one if lowercase, zero if uppercse
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);

	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

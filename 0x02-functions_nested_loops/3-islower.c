#include <stdio.h>
#include "main.h"

/**
 * _islower - tests whether a character is lowercase
 * @c: charachter
 *
 * return: 0 if uppercase, or 1 if lowercase
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);

}

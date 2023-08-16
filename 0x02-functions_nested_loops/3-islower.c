#include <stdio.h>
#include "main.h"

/**
 * _islower - tests whether a character is a lowercase letter from the English alphabet.
 *
 * return: 0 if uppercase, or 1 if lowercase
 * @c: charachter
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

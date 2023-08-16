#include <stdio.h>
#include "main.h"

/**
 *_islower - check if the given character is lower case.
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

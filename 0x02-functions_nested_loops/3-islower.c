#include <stdio.h>
#include "main.h"

/**
 * _islower - returns 1 if the alphabet is lower case and zero if not
 * return: 1
 * return: 0
 * @c charachter
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

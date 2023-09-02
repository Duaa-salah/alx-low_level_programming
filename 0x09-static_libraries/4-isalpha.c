#include <stdio.h>
#include "main.h"

/**
 *_isalpha - check if the given character is lower case.
 * @c: charachter
 *
 * Return: 0 if uppercase, or 1 if lowercase
*/
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
		return (0);

}

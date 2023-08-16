#include <stdio.h>
#include "main.h"

/**
 *_isalpha - check if the given character is lower case
 *
 * @c: charachter
 * Return: 0 if uppercase, or 1 if lowercase
*/
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else 
	{
		return (-1);
		_putchar('-');
	}

}

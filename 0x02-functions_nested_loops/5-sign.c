#include <stdio.h>
#include "main.h"

/**
 * print_sign  - check if the given character is +/-
 *
 *
 * Return: 0 if uppercase, or 1 if lowercase
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else 
	{
		_putchar('0');
		return (0);
	}

}

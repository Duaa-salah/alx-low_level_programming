#include "main.h"

/**
 * print_numbers - function that print all numbers from
 * 0 to 9
 * followed by a new line
 * Return: returns nothing
*/
void print_numbers(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}

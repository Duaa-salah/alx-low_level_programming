#include <stdio.h>
/**
 *main -Entry point
 *
 *Return: 0
*/
int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
		if (alph == 'e' || alph == 'q')
			alph++;
	}
	putchar('\n');
	return (0);
}

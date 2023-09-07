#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *appen;
	unsigned int ln_s1 = 0;
	unsigned int ln_s2 = 0;
	unsigned int x;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[ln_s1] != '\0')
	{
		ln_s1++;
	}
	while (s2[ln_s2] != '\0' && ln_s2 < n)
	{
		ln_s2++;
	}

	appen = (char *)malloc(ln_s1 + ln_s2 + 1);

	if (appen == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < ln_s1; x++)
	{
		appen[x] = s1[x];
	}
	for (x = 0; x < ln_s2; x++)
	{
		appen[ln_s1 + x] = s2[x];
	}
	appen[ln_s1 +ln_s2] = '\0';

	return (appen);
}

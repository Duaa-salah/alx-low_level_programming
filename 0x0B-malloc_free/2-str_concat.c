#include "main.h"
/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *appen;
	size_t f, h;
	size_t l_s1 = 0;
	size_t l_s2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[l_s1] != '\0')
	{
		l_s1++;
	}
	while (s2[l_s2] != '\0')
	{
		l_s2++;
	}

	         appen = (char *)malloc(l_s1 + l_s2 + 1);

        if (appen == NULL)
        {
                return (NULL);
        }

	for (f = 0; f < l_s1; f++)
	{
		appen[f] = s1[f];
	}
	for (h = 0; h < l_s2; h++)
	{
		appen[f + h] = s2[h];
	}

	appen[f + h] = '\0';

	return (appen);
}

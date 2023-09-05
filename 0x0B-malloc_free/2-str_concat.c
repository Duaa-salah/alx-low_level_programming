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
	size_t l_s1 = strlen(s1);
	size_t l_s2 = strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

		appen = (char *)malloc(l_s1 + l_s2 + 1);

	if (appen == NULL)
	{
		return (NULL);
	}

	strcpy(appen, s1);
	strcat(appen, s2);

	return (appen);
}

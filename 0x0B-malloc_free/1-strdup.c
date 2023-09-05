#include "main.h"
/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *get;

	get = (char *)malloc(strlen(str) + 1);

	if (get == NULL)
	{
		return (NULL);
	}

	strcpy(get, str);

	return get;
}

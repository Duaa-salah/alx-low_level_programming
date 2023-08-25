#include "main.h"
#include <string.h>
/**
 *_strcat - Write a function that concatenates two strings.
 *src: This is the input source
 *@dest: This is the output dest
 *Return: This return to dest, that concatenates two strings
 */
char *_strncat(char *dest, char *src, int n)
{
	int index, count;

	for (index = 0; dest[index] != '\0'; index++)
		;
	for (count = 0; count < n && src[count] != '\0'; count++)
	{
		dest[index] = src[count];
		index++;
	}
	if (count < n)
	{
	dest[index] = '\0';
	}
	return (dest);
}

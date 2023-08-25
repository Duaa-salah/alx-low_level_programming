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
		int i;

		i = 0;

		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
		
		return (dest);

}

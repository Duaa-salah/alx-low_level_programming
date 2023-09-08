#include <string.h>
#include "main.h"

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t tsize = nmemb * size;
	void *x;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	x = malloc(tsize);

	if (x == 0)
	{
		return (NULL);
	}
	memset(x, 0, tsize);
	
	return (x);
}

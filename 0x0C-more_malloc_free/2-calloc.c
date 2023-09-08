#include <string.h>
#include "main.h"

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 * *char_f - Initialize the allocated memory to zero
 * *x - Allocate memory using malloc
 * @tsize: Calculate the total size in bytes
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t tsize = nmemb * size;
	void *x;
	size_t a;
	char *char_f;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	x = malloc(tsize);

	if (x == 0)
	{
		return (NULL);
	}

	char_f = (char *)x;

	for (a = 0; a < tsize; a++)
	{
		char_f[a] = 0;
	}

	return (x);
}

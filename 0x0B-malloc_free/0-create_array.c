#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char* arr;

	if (size == 0)
	{
		return (NULL);
	}
	
	arr = (char*)malloc(size * sizeof(char));
	{
		if (arr == NULL)
		{
			return (NULL); /**memmory allocation failed */
		}
	}
	for (i = 0; i < size;)
	{
	       	arr[i] = c; /** initialize each element with \'c\' */
		i++;
	}
	return arr;
}

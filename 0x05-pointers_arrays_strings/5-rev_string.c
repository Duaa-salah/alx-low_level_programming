#include"main.h"
#include <string.h>
/**
 * rev_string - This fuction print a string reverser
 *
 *@s: this is the pointer that point to a string
 */
void rev_string(char *s)
{
	int start, temp;
	int end = 0;

	while (*(s + end) != '\0')
	{
		end++;
	}

	end -= 1;
	start = 0;
	while (end > start)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}

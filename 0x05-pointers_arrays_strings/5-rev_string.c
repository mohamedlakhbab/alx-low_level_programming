#include "main.h"
#include <string.h>
/**
 * rev_string - a function that reverses a string
 * @s: reverse it
 *
 * Return: void
 */
void rev_string(char *s)
{
	int length = strlen(s);
	int start = 0;
	int end = length - 1;

	while (start < end)
	{
		char temp = s[start];

		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}


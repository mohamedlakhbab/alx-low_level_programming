#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * followed by a new line
 * @s: reverse it
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	for (i = length ; i >= 0 ; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

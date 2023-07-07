#include "main.h"
#include <stdio.h>

/**
 * main - print nbr of arguments
 * @argc: number of arg
 * @argv: array of arg
 *
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}

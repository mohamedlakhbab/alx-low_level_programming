#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers
 * @argc: number of arg
 * @argv: array of arg
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int nbr1, nbr2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	nbr1 = atoi(argv[1]);
	nbr2 = atoi(argv[2]);

	printf("%d\n", nbr1 * nbr2);

	return (0);
}


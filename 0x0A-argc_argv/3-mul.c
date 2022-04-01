#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main- entry point
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int main(int argc, char *argv[])
{
	int i, mult = 0;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", n);
	}
	return (0);

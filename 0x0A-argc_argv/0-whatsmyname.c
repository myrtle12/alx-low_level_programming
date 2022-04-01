#include "main.h"
#include <stdio.h>

/**
 * a program that prints a new name without having to compile again
 *
 * @argc: number of arguments
 * @argv: array of arguments
 * success returns 0
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}

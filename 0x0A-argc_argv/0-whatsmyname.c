#include "main.h"
#include <stdio.h>

/**
 * a program that prints a new name without having o compile again
 *
 * success returns 0
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

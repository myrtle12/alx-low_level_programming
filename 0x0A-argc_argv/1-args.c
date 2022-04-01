#include "main.h"
#include <stdio.h>

/**
 * a program that prints the number of arguments passed into it
 * prints a number followed by newline
 *
 * @main success returns 0
 * @argc gives the number of arguments
 * @argv gives argument name
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc);
	return (0);
}

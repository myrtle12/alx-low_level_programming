#include <stdio.h>

/**
 * main - Prints the name of the file that it was compiled from.
 * Return: success (0).
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}


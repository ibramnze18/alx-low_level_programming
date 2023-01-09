#include <stdio.h>
#include "main.h"

/**
 * main - Function containing argc and argv
 * @argc: Argument counter
 * @argv: Argument variable
 * Return: Always 0 On Success
 */

int main(int argc__attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv[0]);

	return (0);
}

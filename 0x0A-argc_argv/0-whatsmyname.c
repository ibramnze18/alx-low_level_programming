#include <stdio.h>
#include "main.h"

/**
 * main - Function containing argc and argv
 * @argc: Argument counter
 * @argv: Argument variable
 * Return: Always 0 On Success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

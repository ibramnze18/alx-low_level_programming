#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	printf("Size of a char: %iu byte(s)\n", sizeof(char));
	printf("Size of an int: %iu byte(s)\n", sizeof(int));
	printf("Size of long int: %iu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %iu byte(s)\n" sizeof(long long int));
	printf("Size of float %iu byte(s)\n" sizeof(float));
	return (0);
}

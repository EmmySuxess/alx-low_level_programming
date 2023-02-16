#include <stdio.h>

/**
 * main - the main function of size
 *
 * Return: 0 when successful
 */

int main(void)
{
	printf("Size of a  char: %ld byte(s)\n", sizeof(char));
	printf("Size of a int: %ld byte(s)\n", sizeof(int));
	printf("Size of a  long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
	printf("Size of a float:  %ld byte(s)\n", sizeof(float));
	printf("The size of void pointer is %ld byte(s)\n", sizeof(void *));
	return (0);
}

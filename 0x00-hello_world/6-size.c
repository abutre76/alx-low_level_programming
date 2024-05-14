#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	char letter;
	int num;
	long int lnum;
	long long int llnum;
	float num2;

	printf("Size of a char: %ld byte(s)\n", sizeof(letter));
	printf("Size of an int: %ld byte(s)\n", sizeof(num));
	printf("Size of a long int: %ld byte(s)\n", sizeof(lnum));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(llnum));
	printf("Size of a float: %ld byte(s)\n", sizeof(num2));
	return (0);
}

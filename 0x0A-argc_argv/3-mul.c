#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that multiplies two numbers.
 * If the program does not receive two arguments,it should print Error,
 * followed by a new line, and return 1
 * @argc: arg count param
 * @argv: arg array param
 * Return: 0 (Success) 1 otherwise
 */

int main(int argc, char *argv[])
{
	int n1, n2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		mul = n1 * n2;
		printf("%d\n", mul);
	}

	return (0);
}

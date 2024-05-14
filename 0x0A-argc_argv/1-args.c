#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: argument count param
 * @argv: argument vector param
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	if (argc)
		printf("%d\n", argc - 1);
	return (0);
}

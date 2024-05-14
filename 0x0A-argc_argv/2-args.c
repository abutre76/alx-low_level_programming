#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: argument count param
 * @argv: argument vector param
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
		printf("%s\n", argv[index]);

	return (0);
}

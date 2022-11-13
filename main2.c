#include "simple_shell.h"

/**
 * main - calls execve function
 * argc - argument count
 * argv - argument vector
 *
 * Return: always 0
 */
int main( int argc, char *argv[])
{
	int i;

	printf("The number of arguments = %d\n", argc - 1);

	for (i = 0; i < argc; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);

	}

	return (0);
}

#include "simple_shell.h"

/**
 * main - calls excve function
 * argc - argumnet count
 * argv - argument vector
 *
 * return: Always 0
 i*/
int main(int argc, char *argv[])
{
	int i;

	(void)argv;
	
	for (i = 0; i < argc; i++)
	{
	printf("argv[%d] = %s\n", i, argv[i]);
	}

	return (0);
}

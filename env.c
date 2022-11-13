#include "simple_shell.h"

/**
 * main - executes environment variables
 *
 * return: always 0
 */
int main(void)
{
	int i;

	i = 0;
	while(environ[i] != 0)
	{
		printf("%s\n", environ[i]);
		i++;
	}

	return (0);
}

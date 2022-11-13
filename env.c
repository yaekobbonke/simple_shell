#include "simple_shell.h"

/**
 * main - executes environment variables
 *
 * return: always 0
 */
int main(int ac, char **av, char **env)
{
	int i;

	(void)ac;
	(void)av;

	i =0;
	while(env[i] != 0)
	{
		printf("%s\n", env[i]);
		i++;
	}

	return (0);
}

#include"simple_shell.h"

/**
 * main - executes execve
 *
 * return: always 0
 */
int main(void)
{
	char *argv[] = { "./main", NULL};

	int val = execve("./main", argv,  NULL);
	if(val == -1)
	
		perror("error");
	printf("execve done\n");

	return (0);
}

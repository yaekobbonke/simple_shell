#include "simple_shell.h"

/**
 * main - prints PID
 *
 * Return: always 0
 */
int main(void)
{
	pid_t PID;

	PID = getpid();
	printf("My process id is %d\n", PID);
	return (0);
}

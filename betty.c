#include<stdio.h>

/**
 * main - calls other function
 * @argc - counts arguments passed
 * @argv -Pointer pointing to lists of arguments
 * @i - index
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	printf("The number of aruments passed is %d\n", argc);
	for (i = 0; i < argc; i++)
	{
		printf("argv[%d] - %s\n", i, argv[i]);
	}
	return (0);
}

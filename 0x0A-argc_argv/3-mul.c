#include <stdio.h>
#include <stdlib.h>
/**
 * main- wtv
 * @argc: 1
 * @argv: 2
 *
 * Return: 0
 */
int main(__attribute__((unused))int argc, __attribute__((unused))char **argv)
{
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

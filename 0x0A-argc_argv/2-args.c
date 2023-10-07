#include <stdio.h>
/**
 * main- wtv
 * @argc: 1
 * @argv: 2
 *
 * Return: 0
 */
int main(__attribute__((unused))int argc, __attribute__((unused))char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

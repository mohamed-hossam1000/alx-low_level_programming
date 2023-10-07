#include <stdio.h>
/**
 * main- wtv
 * @argc: 1
 * @argv: 2
 *
 * Return: 0
 */
int main(int argc, __attribute__((unused))char **argv)
{
	printf("%d\n", (int)((argv[1] - '0') * (argv[2] - '0')));
	return (0);
}

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
	int res = 0, num, i, j;

	for (i = 0; i < argc; i++)
	{
		num = 0;
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
			{
				num = num * 10 + (argv[i][j] - '0');
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		res += num;
	}
	printf("%d\n", res);
	return (0);
}
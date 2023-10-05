#include <stdlib.h>
/**
 * str_concat- wtv
 * @ac: string
 * @av:string
 *
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	char *arr;

	if (av == NULL || ac == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
			for (j = 0; av[i][j] != '\0';)
				j++;
			k += j + 1;
	}

	arr = malloc(k + 1);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0, k = 0; i < ac; i++)
	{
			for (j = 0; av[i][j] != '\0'; j++)
			{
				arr[k] = av[i][j];
				k++;
			}
			arr[k] = '\n';
			k++;
	}
	arr[k] = '\0';
	return (arr);
}

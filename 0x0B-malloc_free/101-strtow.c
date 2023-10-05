#include <stdlib.h>
/**
 * strtow- wtv
 * @str: string
 *
 * Return: pointer
 */
char **strtow(char *str)
{
	int i, j, k;
	char **arr;

	if (str == NULL)
		return (NULL);

	for (i = 0, j = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			j++;
	}
	j++;

	arr = malloc(j * sizeof(char *));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0, j = 0, k = 0; str[i] != '\0'; i++)
	{
		j++;
		if (str[i] == ' ')
		{
			arr[k] = malloc(j);
			if (arr[k] == NULL)
			{
				for (j = 0; j < k; j++)
				{
					free(arr[j]);
				}
				free(arr);
				return (NULL);
			}
			j = 0;
			k++;
		}
	}

	arr[k] = malloc(j + 1);
	if (arr[k] == NULL)
	{
		for (j = 0; j < k; j++)
		{
			free(arr[j]);
		}
		free(arr);
		return (NULL);
	}

	for (i = 0, j = 0, k = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			arr[k][j] = '\0';
			k++;
			j = 0;
		}
		else
		{
			arr[k][j] = str[i];
		}

	}
	arr[k][j] = '\0';
	return (arr);
}

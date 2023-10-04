#include <stdlib.h>
/**
 * _strdup- wtv
 * @str: string
 *
 * Return: pointer
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *arr;

	for (i = 0; str[i] != '\0'; i++);
	arr = malloc(i + 1);
	if (arr == NULL || i <= 0)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		arr[i] = str[i];
	}
	arr[i] = str[i];
	return (arr);
}

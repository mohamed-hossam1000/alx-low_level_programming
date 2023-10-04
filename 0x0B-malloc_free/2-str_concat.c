#include <stdlib.h>
/**
 * str_concat- wtv
 * @s1: string
 * @s2:string
 *
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j;
	char *arr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0';)
		i++;
	for (j = 0; s2[j] != '\0';)
		j++;
	arr = malloc(i + j + 1);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		arr[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		arr[i + j] = s2[j];
	}
	arr[i + j] = s2[j];
	return (arr);
}

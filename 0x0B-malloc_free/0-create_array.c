#include <stdlib.h>
/**
 * create_array- wtv
 * @size: n
 * @c: n
 *
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = malloc(size);

	if (arr == NULL || size <= 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}

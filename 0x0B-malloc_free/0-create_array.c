#include <stdlib.h>
/**
 * create_array- wtv
 * @size: n
 * @c: n
 *
 * Return: pointer
 * */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *output;
	char *arr = malloc(size);
	if (arr == NULL)
		output = NULL:
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	if (size <= 0)
		output = (char *)NULL;
	else
		output = arr;

	return (output);
}

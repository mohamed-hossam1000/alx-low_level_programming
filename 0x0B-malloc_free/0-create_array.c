#include <stdlib.h>
/**
 * create_array- wtv
 * @size: n
 * @c: n
 *
 * Retuen: pointer
 * */
char *create_array(unsigned int size, char c)
{
	int i, output;
	char* arr = malloc(size);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	if (size <= 0)
		output = NULL;
	else
		output = arr;

	return (output);
}

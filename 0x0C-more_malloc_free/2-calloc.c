#include <stdlib.h>
/**
 * _calloc- wtv
 * @nmemb: n
 * @size: n
 *
 * Return: p
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ret;
	unsinged int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ret = malloc(nmemb * size);
	if (ret == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
	{
		((char *)ret) = '\0';
	}

	return (ret);
}

#include <stdlib.h>
/**
 * malloc_checked- wtv
 * @b: n
 *
 * Return: p
 */
void *malloc_checked(unsigned int b)
{
	void *ret = malloc(b);

	if (ret == NULL)
		exit(0x98);

	return (ret);
}

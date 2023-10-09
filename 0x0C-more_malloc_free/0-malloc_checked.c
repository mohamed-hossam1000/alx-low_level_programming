#include <stdlib.h>
/**
 * malloc_checked- wtv
 * @b: n
 *
 * Return: p
 */
void *malloc_checked(unsigned int b)
{
	void *ret;

	ret = malloc((int)b);
	if (ret == NULL || b == 0)
		exit(98);

	return (ret);
}

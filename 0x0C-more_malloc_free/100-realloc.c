#include <stdlib.h>
/**
 * _realloc- wtv
 * @min: min
 * @max: max
 *
 * Return: p
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size) {
	void *new_ptr;
	if (ptr == NULL)
	{
		return malloc(new_size);
	}

	if (new_size == 0)
	{
		free(ptr);
		return NULL;
	}

	if (new_size == old_size)
	{
		return ptr;
	}

	new_ptr= malloc(new_size);

	size_t copy_size = (old_size < new_size) ? old_size : new_size;
	memcpy(new_ptr, ptr, copy_size);

	free(ptr);

	return new_ptr;
}

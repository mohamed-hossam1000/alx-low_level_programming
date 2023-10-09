#include <stdlib.h>
/**
 * array_range- wtv
 * @min: min
 * @max: max
 *
 * Return: p
 */
int *array_range(int min, int max)
{
	int *ret;
	int i;

	if (min > max)
		return (NULL);

	ret = (int *)malloc((max - min + 1) * 4);
	if (ret == NULL)
		return (NULL);
	for (i = 0; i <= max - min; i++)
	{
		ret[i] = min + i;
	}

	return (ret);
}

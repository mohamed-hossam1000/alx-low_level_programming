/**
 * alloc_grid- wtv
 * @width: n
 * @height: n
 *
 * Return: wtv
 */
int **alloc_grid(int width, int height)
{
	int **arr, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
			return (NULL);
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}

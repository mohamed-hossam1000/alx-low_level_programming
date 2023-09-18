/**
 * _strcpy - wtv
 * @dest: 1
 * @sec: 2
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

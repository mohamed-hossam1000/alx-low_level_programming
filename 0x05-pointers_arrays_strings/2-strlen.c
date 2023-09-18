/**
 * _strlen - wtv
 * @s: 1
 *
 * Return: n
 */
int _strlen(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
		s++;
		n++;
	}
	return n;
}

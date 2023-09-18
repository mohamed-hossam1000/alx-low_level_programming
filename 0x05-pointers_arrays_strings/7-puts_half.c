void _putchar(char);
/**
 * puts2 - check the code
 * @str: 1
 */
void puts2(char *str)
{
	int i = 1, j;

	while (str[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i / 2; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}

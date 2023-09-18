void _putchar(char);
/**
 * puts_half - check the code
 * @str: 1
 */
void puts_half(char *str)
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

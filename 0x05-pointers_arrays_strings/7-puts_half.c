void _putchar(char);
/**
 * puts_half - check the code
 * @str: 1
 */
void puts_half(char *str)
{
	int i = 0, j;

	while (str[i] != '\0')
	{
		i++;
	}
	for (j = i / 2 + (i - 1) /(float) i; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}

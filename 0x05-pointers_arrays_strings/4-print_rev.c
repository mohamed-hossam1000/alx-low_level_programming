void _putchar(char);
/**
 * print_rev - check the code
 * @str: 1
 */
void print_rev(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		str++;
		i++;
	}
	while (i > 0)
	{
		str--;
		i--;
		_putchar(*str);
	}
	_putchar('\n');
}

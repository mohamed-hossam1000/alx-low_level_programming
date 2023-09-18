void _putchar(char);
/**
 * _puts - check the code
 * @str: 1
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

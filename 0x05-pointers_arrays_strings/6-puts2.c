void _putchar(char);
/**
 * puts2 - check the code
 * @str: 1
 */
void puts2(char *str)
{
	while (*str != '\0' && str[-1] != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}

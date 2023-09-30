void _putchar(char);
/**
 * _print_rev_recursion- wtv
 *
 * @s : var
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

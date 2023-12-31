/**
 * _atoi - wtv
 * @s: 1
 *
 * Return: int
 */
int _atoi(char *s)
{
	int num = 0, i, sign = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}

		if (s[i] > '0' && s[i] <= '9')
		{
			break;
		}
	}
	while (s[i] >= '0' && s[i] <= '9' && s[i] != '\0')
	{
		num = num * 10 + (s[i] - '0') * sign;
		i++;
	}
	return (num);
}

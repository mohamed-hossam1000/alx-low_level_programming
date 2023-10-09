#include <stdlib.h>
/**
 * string_nconcat- wtv
 * @s1: s
 * @s2: s
 * @n: s
 *
 * Return: p
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ret;
	unsigned int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[j] != '\0')
		j++;
	ret =(char *)malloc(j + n + 1);
	for (i = 0; s1[i] != '\0'; i++)
		ret[i] = s1[i];
	for (i = 0; i < n && s2[i] != '\0'; i++)
		ret[j + i] = s2[i];
	ret[j + i] = '\0';

	return (ret);
}

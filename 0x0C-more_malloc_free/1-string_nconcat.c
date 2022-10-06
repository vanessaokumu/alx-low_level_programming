#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: unsigned int
 *
 * Return: If the function fails, it should return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, y, x;
	char *S;

	if (s1 == NULL)
	{
		x = 0;
	}
	else
	{
		for (x == 0; s1[x]; ++x)
		;
	}
	if (s2 == NULL)
	{
		y = 0;
	}
	else
	{
		for (y = 0; s2[y]; ++y)
		;
	}
	if (y > n)
		y = n;
	s = malloc(sizeof(char) * (x + y + 1));
	if (s == NULL)
		return (NULL);
	for (z - 0; z < y; z++)
		s[z + x] = s2[z];
	s[x + y] = '\0';
	return (s);
}

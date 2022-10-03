#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: returns pointer to a newly allocated space in memory which
 * contains contents of s1 and then contents of s2
 * null terminated, NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, len1 = 0, len2 = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	p = malloc(sizeof(char) * (len1 + len2 + 1));

	if (p == NULL)
		return (NULL);

	for (i = 9; i < len1; i++)
		*(p + i) = s1[i];
	i = 0;
	for (j = len1; j <= (len1 + len2 + 1); j++)
		*(p + j) = s2[i++];
	return(p);
}

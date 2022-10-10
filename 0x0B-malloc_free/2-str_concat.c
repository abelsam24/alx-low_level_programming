#include "main.h"
/**
 * str_concat - a function concatenates two strings
 * @s1: pointer to first string to be concatenated
 * @s2: pointer to second string to be concatenated
 * Return: concatenated pointer
 */
char *str_concat(char *s1, char *s2)
{
		int l1 = 0, l2 = 0, i, ll = 0, j = 0;
		char *a;

		if (s1 == NULL)
		s1 = "";
		if (s2 == NULL)
		s2 = "";
		for (i = 0; s1[i]; i++)
		{
		l1++;
		}
		for (i = 0; s2[i]; i++)
		{
		l2++;
		}
		ll = l1 + l2;
		a = malloc(sizeof(char) * ll + 1);
		if (a == NULL)
		{
		return (NULL);
		}
		for (i = 0; s1[i]; i++)
		{
		a[j++] = s1[i];
		}
		for (i = 0; s2[i]; i++)
		{
		a[j++] = s2[i];
		}
		return (a);
}

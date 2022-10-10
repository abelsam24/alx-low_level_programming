#include "main.h"
/**
 * _strdup - function returns a pointer to a newly allocated space in memory
 * @str: a pointer to be returned
 * Return: pointer
 */
char *_strdup(char *str)
{
	int i, l = 0;
	char *a;

	if (str == NULL)
	{
	return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
	l++;
	}
	a = malloc(sizeof(char) * (l + 1));
	if (a == NULL)
	{
	return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
	a[i] = str[i];
	}
	return (a);
}

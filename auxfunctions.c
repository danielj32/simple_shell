#include "holberton.h"
/**
 *_strlen - It will tell me how long is a string of characters
 *@s: It will call the word that is on the main
 *Return: n
 */
int _strlen(char *s)
{
	int n;


	for (n = 0; *(s + n) != '\0'; n++)
	{
	}
	return (n);
}
/**
 * _strcmp - Is the prototype, compares two strings.
 * @s1: Is the variable we are working with
 * @s2: Is the second variable we are working with
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int f;

	for (f = 0; s1[f] != '\0'; f++)
	{
	}
	for (f = 0; s2[f] != '\0'; f++)
		if (s1[f] != s2[f])
		{
			return (s1[f] - s2[f]);
		}
	return (0);
}
/**
 * str_concat - Concatenate two strings
 * @s1: string one
 * @s2: string two
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, k, l;
	char *new_str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (k = 0; s1[k]; k++)
	{}
	for (l = 0; s2[l]; l++)
	{}
	new_str = malloc(sizeof(char) * (k + l + 1));
	if (new_str == NULL)
		return (NULL);

	for (i = 0; *s1; i++)
	{
		new_str[i] = *s1;
		s1++;
	}
	for (; *s2; i++)
	{
		new_str[i] = *s2;
		s2++;
	}
	new_str[i] = '\0';
	return (new_str);
}

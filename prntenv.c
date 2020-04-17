#include "holberton.h"
/**
 * envir - Will print env
 * @name: variable
 * @env: variable
 * Return: null
 */
char *envir(const char *name, char **env)
{
	int r = 0, q = 0;

	if (name == NULL || env == NULL || *env == NULL)
	{
		return (NULL);
	}
	while (env[r] != NULL)
	{
		while (env[r][q] == name[q])
		{
			q++;
		}
		if (env[r][q] == '=')
		{
			q++;
			return (&(env[r][q]));
		}
		r++;
		q = 0;
	}
	write(STDOUT_FILENO, "Not in environment", 18);
	return (NULL);
}

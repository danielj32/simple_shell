#include "holberton.h"

/**
 * print_matriz - print the string
 *@av: is the argument
 */

void print_matriz(char *av)
{
	int ct = 0;

	while (av[ct] != '\0')
	{
		_putchar(av[ct++]);
	}

}
/**
 * main - getline
 *
 * Return: Always 0.
 */
int main(void)
{
	char *buffer = NULL;
	int stat, j = 0;
	char *arv[] = {"/bin/ls", NULL};
	size_t len;

	while (1)
	{
		write(STDOUT_FILENO, "$ ", 2);
		while (getline(&buffer, &len, stdin) != EOF)
		{

			print_matriz(buffer);
		       write(STDOUT_FILENO, "$ ", 2);
		}
		pid_t child_pd;

		child_pd = fork();

		if (child_pd == 1)
		{
			perror("Error:");
			return (1);
		}
		if (execve(arv[0], arv, NULL) == -1)
			perror("Error:");

		if (child_pd == 0)
		{
			write(STDOUT_FILENO, "^C\n", 2);
			return (2);
		}
		else
		{
			wait(&stat);
			exit(stat);
		}
		j++;
	}
	free(buffer);
	return (0);
}


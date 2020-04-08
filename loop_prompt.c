#include "holberton.h"


void print_matriz(char *av)
{
        int ct = 0;

        while (av[ct] != '\0')
        {
                _putchar(av[ct++]);
        }
}

int main(void)
{
        char *buffer = NULL;
        size_t len = 0;

        write(STDOUT_FILENO, "$ ", 2);
        while (getline(&buffer, &len, stdin) != -1)
        {
                print_matriz(buffer);
                write(STDOUT_FILENO, "$ ", 2);
        }
        free(buffer);
}


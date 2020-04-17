#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>


int _putchar(char c);
int _strlen(char *s);
char *envir(const char *name, char **env);
char *str_concat(char *s1, char *s2);
int _strcmp(char *s1, char *s2);
void print_matriz(char *av);
int main(void);

#endif

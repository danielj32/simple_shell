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
void _printenv(void);
extern char **environ;
int _strlen(char *s);
char *rdline(ssize_t *c);
int env(char **env);
char **parseString(char *lineArg, char *separator);
void checkIfExit(char **parse, char *lineArg, int cmp);
int _strLen(char *s);
char *envir(const char *name, char **env);

#endif

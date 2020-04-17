#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#define DELIMS " \t\0"

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
char *str_concat(char *s1, char *s2);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
void print_matriz(char *av);
int main(int ac, char **av, char **env);
int exec(char **ar, char **env, char **argv, char *line, char *nline, int j);
int C_d(char *line);
char **str_split(char *line);
char *m_alloc(char *c);
void free_all(char *line, char *nline, char**tok);
int ctrld(char *line);


#endif

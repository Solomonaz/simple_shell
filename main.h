#ifndef SIMPLE_SHELL
#define SIMPLE_SHELL

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <string.h>

int _strlen(const char *s);
char *_strcpy(char *dest, const char *src);
int _putchar(char c);
void _puts(char *str);
unsigned int nbr_spaces(char *s);
char **stringToTokens(char *str);

/* path */
int _path(char *first, char **input, char **env, int *ex_st);


/* environment */
int printenv(char **env, int *ex_st);
char *cpy_env(char **env);


/* built-ins & execute function */
void builtins(char *line, char **args, char **env, int *ex_st);
void _execute(int status, char **args, int *ex_st, int *tal);

/* strings.c: functions related to strings */
int _strlen(char *s);
char *_strdup(char *str);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);


/* printf.c: functions related to printing strings/characters/numbers */
int _putchar(char c);
void print_str(char *s);
char *pathstr(char *right, char *first);
char **parser(char *l);
void print_int(int *tal);


/* helpers.c: helper functions */
void no_nl(char *l);
void free_grid(char **grid, int height);
int special_char(char *buffer, ssize_t bytes, int *ex_st);


#endif

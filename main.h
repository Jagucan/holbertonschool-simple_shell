#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>

extern char **environ;

int main(void);
int _env(void);
int prompt(void);
void ctrl_d(int sign);
int functions(char **args);
char **_tokenizer(char *buffer);
int _strcmp(char *s1, char *s2);

#endif

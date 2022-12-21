#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>

int main(void);
int _env(void);
int prompt(void);
int functions(char **args);
void ctrl_d(int sign);
char **_tokenizer(char *buffer);

#endif

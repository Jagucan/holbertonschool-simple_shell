#include "main.h"

/**
 * main - Is the main function for the shell.
 * Return: Return void.
 */

int main(void)
{
	char *buffer = NULL;
	char **buff;
	ssize_t command = 0;
	size_t size = 0;

	buffer = (char *) malloc(sizeof(char *) * size);
	if (!buffer)
		return (0);
	while (1)
	{
		prompt();
		signal(SIGINT, ctrl_d);
		command = getline(&buffer, &size, stdin);
		if (command == -1)
			break;
		if (buffer[0] == '\n')
			continue;
		buff = _tokenizer(buffer);
		if (buff[0] == NULL)
		{
			free(buff);
			continue;
		}
		if (_strcmp(buff[0], "exit") == 0)
		{
			free(buff);
			free(buffer);
			return (command);
		}
		if (_strcmp(buff[0], "env") == 0)
		{
			_env();
			continue;
		}
		command = functions(buff);
	}
	free(buffer);
	return (command);
}

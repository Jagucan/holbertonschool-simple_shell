#include "main.h"

/**
 * _tokenizer - Is the function for tokenization.
 * @buffer: Is a pointer.
 * Return: Return buff.
*/
char **_tokenizer(char *buffer)
{
	char *token;
	char **buff;
	size_t size = 0;

	buff = (char **) calloc(size, sizeof(char *));
	if (!buff)
		return (NULL);

	token = strtok(buffer, "\n");
	if (!token)
		return (NULL);

	for (size = 0; token != NULL; 	size++)
	{
		buff[size] = token;
		token = strtok(NULL, "\n");
	}

	return (buff);
}

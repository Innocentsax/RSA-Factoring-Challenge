#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#include "main.h"

/**
 * count_ws - a helper function to count the
 * number of words in line
 * @str: the line
 * Return: the number of words
 */

int count_ws(char *str)
{
	int count, w, flag;

	flag = 0;
	w = 0;

	for (count = 0; str[count] != '\0'; count++)
	{
		if (str[count] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}
	return (w);
}

/**
 * tokens - a function to tokenize the line read
 * from a file
 * @str: the line read from the file
 * Return: pointer to an arrays with tokens
 */

char **tokens(char *str)
{
	char **av, *tmp;
	int i, k = 0, len = 0, c = 0, w, start, end;

	len = strlen(str);
	w = count_ws(str);
	if (w == 0)
		return (NULL);

	av = (char **) malloc(sizeof(char *) * (w + 1));
	if (av == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (isspace(str[i]) || str[i] == '\0' || str[i] == '\n')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				av[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	av[k] = NULL;

	return (av);
}
int main(int argc, char *argv[])
{
	int n = 0, err_len, num, ok = 0;
	size_t len = 0;
	char *filename, *error, *line, **numbers;
	FILE *file;

	error = "File cannot be opened";

	if (argc < 2)
		printf("Usage: factors <file>");
	
	filename = argv[1];
	file = fopen(filename, "r");

	err_len = strlen(error);

	if (!file)
	{
		fprintf(stderr, error, err_len);
		exit(EXIT_FAILURE);
	}
	while (!ok)
	{
		n = getline(&line, &len, file);
		if (n < 0)
			ok++;
		numbers = tokens(line);
		num = atoi(numbers[0]);
		print_fact(num);
	}



	return 0;
}

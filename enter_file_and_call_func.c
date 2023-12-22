#define _GNU_SOURCE
#include "monty.h"

/**
 * enter_file - enter_file
 * @my_file: pointer to the file
 */
void enter_file(FILE *my_file)
{
	char *str = NULL, **arr = NULL;
	size_t in_len = 0;
	int reads_chars = 0;
	unsigned int line_number = 1;

	while (1)
	{
		reads_chars = getline(&str, &in_len, my_file);
		if (reads_chars == -1)
		{
			if (str != NULL)
				free(str);
			break;
		}
		if (str[reads_chars - 1] == '\n')
			str[reads_chars - 1] = '\0';
		if (str[0] == '\0')
		{
			free(str);
			str = NULL;
			continue;
		}
		arr = tokanized_array(str);
		free(str);
		str = NULL;
		if (arr[0] != NULL)
		{
			factors(arr[0]);
			free_all_array(arr);
		}
		else
		{ free_all_array(arr); }
		line_number++;
	}
}

/**
 * factor - function come with the factors of the number
 * @str: num we should come with its factors
 * Return: (void)
*/
void factors(char *str)
{
unsigned long int x = _atoi(str);
unsigned long int i = 2;

if (x % i == 0)
{
	fprintf(stdout,"%ld=%ld*%ld\n", x, (x / i), i);
}
else
{
	i++;
	while(i < x)
	{
		if (x % i == 0)
		{
			fprintf(stdout,"%ld=%ld*%ld\n", x, (x / i), i);
			break;
		}
		i += 2;
	}
}
}

#include "monty.h"

/**
 * is_integer - checks if a string represents a valid integer
 * @str: string to be checked
 * Return: true if str is a valid integer, false otherwise
 */
bool is_integer(const char *str)
{
	if (str == NULL || *str == '\0')
		return (false);

	if (*str == '-' || *str == '+')
		str++;

	if (*str == '\0')
		return (false);

	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (false);
		str++;
	}

	return (true);
}

#include "main.h"

/**
 * _isupper - checks if c is uppercase
 *
 * @c: character to be checked
 *
 * Return: i if uppercase 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

/**
 * _strlen - takes a pointer to an char parameter
 *               and return length
 *
 * @s: char parameter
 *
 * Return: length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}

/**
 * _memset - fill memory with a constant byte
 * @s: pointer to the character and starting address
 * @b: value to be filled or changed
 * @n: index
 * Return: *s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i= 0; i < n; ++i)
	{
		s[i] = b;
	}
	return (s);
}


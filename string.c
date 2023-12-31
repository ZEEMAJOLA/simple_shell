#include "shell.h"

/**
 * _strlen - the length of a string
 * @s: check length of the string
 * Return: integer length of string.
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * _strcmp - lexicogarphic comparison of two strangs.
 * @s1: first strang
 * @s2: second strang
 *
 * Return: (-) if s1 < s2, (+) if s1 > s2,0 if s1 == s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}

/**
 * starts_with - detects if needle starts with haystack.
 * @haystack: search string
 * @needle: finds the substring
 *
 * Return: address of next char of haystack or NULL.
 */
char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}

/**
 * _strcat - links two strings
 * @dest: destination buffer.
 * @src: source buffer
 *
 * Return: pointer to destination buffer.
 */
char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}

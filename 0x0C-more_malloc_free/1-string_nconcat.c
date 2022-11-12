#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Function concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 * @n: The minimum length of second string to copy.
 *
 * Description: Function concatenates 2 strings. if n is greater or equal to
 * the length of s2, then use the entire string s2.
 * Return: pointer to a newly allocated space in memory, containing s1,
 * followed * by the first n bytes of s2.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string;
	unsigned int len1, len2, total_len, i, j;

	i = len1 = len2 = total_len = j = 0;
	if (s1 == NULL)
		len1 = 0;
	if (s2 == NULL)
		len2 = 0;
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n < len2)
	{
		total_len = len1 + n;
		len2 = n;
	}
	if (n >= len2)
		total_len = len1 + len2;
	total_len++;
	new_string = malloc((total_len) * sizeof(char));
	if (new_string == NULL)
		return (NULL);
	while (i < len1)
	{
		new_string[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		new_string[j + i] = s2[j];
		j++;
	}
	new_string[j + i] = '\0';
	return (new_string);
}

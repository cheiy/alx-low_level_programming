#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Function concatenates two strings.
 * @s1: String 1
 * @s2: String 2
 *
 * Description: Function concatenates two strings.
 *
 * Return: Pointer to the newly allocated space containing the contents
 * of s1, followed by the contents of s2 and null terminated, NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *s1_s2;
	unsigned int s1_len;
	unsigned int s2_len;
	unsigned int total_len;

	s1_len = 0;
	s2_len = 0;
	while (s1[s1_len])
	{
		s1_len++;
	}
	while (s2[s2_len])
	{
		s2_len++;
	}
	total_len = s1_len + s2_len + 1;
	s1_s2 = (char *)(malloc(sizeof(char) * total_len));
	if (s1_s2 == NULL)
	{
		return (NULL);
	}
	else
	{
		s1_len = 0;
		while (s1[s1_len] != '\0')
		{
			s1_s2[s1_len] = s1[s1_len];
			s1_len++;
		}
		s2_len = 0;
		s2_len = s1_len;
		s1_len = 0;
		while (s2[s1_len] != '\0' && s2_len < total_len)
		{
			s1_s2[s2_len] = s2[s1_len];
			s2_len++;
			s1_len++;
		}
	}
	return (s1_s2);
}

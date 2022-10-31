#include "main.h"
/**
 * _strcmp - Function compares two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Description: Function compares two given strings.
 *
 * Return: positive integer if s1 is greater than s2
 * negative integer if s1 is less than s2
 * 0 if s1 is equal to s2
 *
 */
int _strcmp(char *s1, char *s2)
{
	int len;
	int ret;

	len = 0;
	while (s1[len] != '\0' || s2[len] != '\0')
	{
		if (s1[len] > s2[len])
		{
			ret = s1[len] - s2[len];
			break;
		}
		else if (s1[len] < s2[len])
		{
			ret = s1[len] - s2[len];
			break;
		}
		else
		{
			len++;
			ret = 0;
			continue;
		}
	}
	return (ret);
}

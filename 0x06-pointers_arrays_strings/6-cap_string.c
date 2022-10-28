#include "main.h"
#include <ctype.h>
/**
 * cap_string - Function capitalizes all words of a string.
 * @str: Pointer to the string whose words to capitalize
 *
 * Description: Function capitalizes all words of a string
 *
 * Return: Pointer to the capitalized string
 */
char *cap_string(char *str)
{
	char *upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *lower = "abcdefghijklmnopqrstuvwxyz";
	int count  = 0;
	int sep_count = 0;
	int count2 = 0;

	char separators[] = "' ', '\t', '\n', ',' ,';' , '.' ,'!' ,'?' ,'\"' , '(' ,'\
			     )' ,'{' ,'}'";

	while (str[count] != '\0')
	{
		while (count2 < 26)
		{
			if (str[count] == separators[sep_count])
			{
				while (str[count] == upper[count2] || str[count] == lower[count2])
				{
					str[count + 1] = upper[count2];
					break;
				}
			}
			else
			{
				break;
			}
		}
		count2 = 0;
		count++;
	}
	return (str);
}

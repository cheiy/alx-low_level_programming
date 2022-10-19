#include <stdio.h>

/**
 * main - prints all possible combinations of 2 digits
 *
 * Description: Prints all possible combinations of two digits
 * printf() not allowed, only putchar().
 * putchar() can only be used twice
 *
 * Return: 0 if successful
 *
 */
int main(void)
{
	int nums1[] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};
	int count1 = 0;
	int count2 = 1;

	while (count1 <= 9)
	{
		while (count2 <= 9)
		{
			putchar(nums1[count1]);
			putchar(nums1[count2]);
			if (count1 < 8)
			{
				putchar(44);
				putchar(32);
			}
			count2++;
		}
		count2 = 0;
		count1++;
		count2 = count1 + 1;
	}
	putchar('\n');

	return (0);
}


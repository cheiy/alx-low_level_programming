#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
/* 0x07 */
char *_memset(char *, char b, unsigned int n);

char *_memcpy(char *dest, char *src, unsigned int n);

char *_strchr(char *s, char c);

unsigned int _strspn(char *s, char *accept);

char *_strpbrk(char *s, char *accept);

char *_strstr(char *haystack, char *needle);

void print_chessboard(char (*a)[8]);

void print_diagsums(int *a, int size);

void set_string(char **s, char *to);

/* 0x06 */
void print_buffer(char *b, int size);

char *infinite_add(char *n1, char *n2, char *r, int size_r);

void print_number(int n);

char *rot13(char *);

char *leet(char *);

char *cap_string(char *);

char *string_toupper(char *);

void reverse_array(int *a, int n);

int _strcmp(char *s1, char *s2);

char *_strncpy(char *dest, char *src, int n);

char *_strcat(char *dest, char *src);

char *_strncat(char *dest, char *src, int n);



/* 0x05*/

int _atoi(char *s);

char *_strcpy(char *dest, char *src);

void print_array(int *a, int n);

void puts_half(char *str);

void puts2(char *str);

void rev_string(char *s);

void print_rev(char *s);

void _puts(char *str);

int _strlen(char *s);

void swap_int(int *a, int *b);

void reset_to_98(int *n);


/*END OF 0x05 */


int _putchar(char c);

int _isupper(int c);

int _isdigit(int c);

int mul(int a, int b);

void print_numbers(void);

void print_most_numbers(void);

void more_numbers(void);

void print_line(int n);

void print_diagonal(int n);

void print_square(int size);

void print_triangle(int size);

void print_number(int n);

#endif /* MAIN_H */

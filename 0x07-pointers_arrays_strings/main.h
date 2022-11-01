#ifndef MAIN_H
#define MAIN_H

/**
 * DESC: a header file containing all the prototypes for the functions used
 * in 0x07-pointers_arrays_strings.
 */



char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size0);
void set_string(char **s, char *to);
int _putchar(char c);

#endif

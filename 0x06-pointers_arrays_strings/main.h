#ifndef MAIN_H
#define MAIN_H

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *str);
char *cap_string(char *str);
char *leet(char *ch);
char *rot13(char *s);
int _putchar(char ch);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
int ifascii(int n);
void hexa(char *b, int f, int l);
void giveascii(char *b, int f, int l);
void print_buffer(char *b, int size);

#endif

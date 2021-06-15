#ifndef LIBMX_H
#define LIBMX_H

#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <fcntl.h>
#include <limits.h>
#include <stdio.h>

typedef struct s_list { 
    void *data;
    struct s_list *next; 
    } t_list;

#endif

void mx_print_strarr(char **arr, const char *delim);
char *mx_strncpy(char *dst, const char *src, int len);
void mx_str_reverse(char *s);
char *mx_strnew(const int size);
int mx_strlen(const char *s);
void mx_printchar(char c);
void mx_printstr(const char *s);
int mx_strncmp(const char *str1, const char *str2, size_t n);
char *mx_strstr(const char *haystack, const char *needle);
char *mx_strtrim(const char *str);

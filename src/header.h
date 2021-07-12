#ifndef LIBMX_H
#define LIBMX_H

#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <fcntl.h>
#include <limits.h>
#include <stdio.h>
#include <malloc/malloc.h>

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
char *mx_strndup(const char *s1, size_t n);
bool mx_isspace(int c);
char *mx_del_extra_spaces(const char *str);

void *mx_memset(void *b, int c, size_t len);
void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n);
int mx_memcmp(const void *s1, const void *s2, size_t n);
void *mx_realloc(void *ptr, size_t size);
void *mx_memmove(void *dst, const void *src, size_t len);
void *mx_memrchr(const void *s, int c, size_t n);
void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);
void *mx_memchr(const void *s, int c, size_t n);
void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len);
void mx_print_unicode(wchar_t c);
int mx_quicksort(char **arr, int left, int right);
int mx_count_words(const char *str, char c);
int mx_count_substr(const char *str, const char *sub);
int mx_get_substr_index(const char *str, const char *sub);
char **mx_strsplit(const char *s, char c);
char *mx_replace_substr(const char *str, const char *sub, const char *replace);
char *mx_strcpy(char *dst, const char *src);
char *mx_file_to_str(const char *file);
int mx_read_line(char **lineptr, size_t buf_size, char delim, const int fd);
t_list *mx_create_node(void *data);
void mx_push_front(t_list **list, void *data);
void mx_pop_front(t_list **head);






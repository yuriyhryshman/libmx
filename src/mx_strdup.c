#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int mx_strlen(const char *s);
char *mx_strnew(const int size);
char *mx_strcpy(char *dst, const char *src);

char *mx_strdup(const char *str) {
    if ( str == NULL) return NULL;
    char *dup = mx_strnew(mx_strlen(str));
    mx_strcpy(dup, str);
    return dup;
}

/*
int main() {
    char *str = mx_strdup("Follow the rabbit");
    printf("%s", str);
}
*/

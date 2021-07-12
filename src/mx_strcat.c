#include "header.h"

int mx_strlen(const char*);

char *mx_strcat(char *s1, const char *s2) {
    int i = mx_strlen(s1);
    char *ptr = mx_strnew((mx_strlen(s1)) + mx_strlen(s2));

    ptr = s1;

    while (*s2) {
        ptr[i] = *s2++;
        i++;
    }

    return ptr;
}

/*
int main() {
    char str[] = "hello ";
    char str2[] = "my sanity";
    printf("%s", mx_strcat(str, str2));
}
*/

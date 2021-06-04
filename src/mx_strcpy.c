#include "header.h"

char *mx_strcpy(char *dst, const char *src) {
    int i;
    for (i = 0; src[i] != '\0'; i++) 
        dst[i] = src[i];
    dst[i] = '\0';
    return dst;
}

/*
int main() {
    char src[40] = "yo neo bro, wassup man?";
    char dst[40];
    mx_strcpy(dst, src);
    printf("%s\n", dst);
}
*/


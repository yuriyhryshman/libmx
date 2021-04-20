#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *mx_strnew(const int size) {
    if (size <= 0) return NULL;
    char *str = malloc(sizeof(char) * (size+1));
    for (int i = 0; i <= size; i++) {
        str[i] = '\0';
    }
    return str;
}

/*
int main() {
    int size = 0;
    char *str = mx_strnew(size);
    printf("%s\n", str);
}
*/



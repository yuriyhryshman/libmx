#include "header.h"

void *mx_memset(void *b, int c, size_t len) {
    char *str = b;
    for (size_t i = 0; i < len; i++) {
        str[i] = c;
    }
    return b;
}

/*
int main() {
    unsigned char string[25] = "0123456789ABCDEF";
    mx_memset(string, '8', 10);
    printf("string: %s\n", string);
}
*/



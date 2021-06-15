#include "header.h"

void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n) {
    unsigned char *dest = dst;
    const char *source = src;
    for (size_t i = 0; i < n; i++) {
        dest[i] = source[i];
    }
    return dst;
}

/*
int main() {
    unsigned char src[25] = "0123456789ABCDEF";
    unsigned char destination[25] = "syyyyyyykaxyi";
    mx_memcpy(destination, src, 10);
    printf("%s", destination);
}
*/

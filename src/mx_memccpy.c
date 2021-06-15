#include "header.h"

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n) {
    const char *source = src;
    size_t i;

    if (n != 0) {
        for (i = 0; i <= n; i++)
            if (source[i] != c) return dst = mx_memcpy(dst, src, n);
        return NULL;
    }
    return NULL;
}



int main() {
    unsigned char src[25] = "0123456789ABCDEF";
    unsigned char destination[25] = "";
    mx_memccpy(destination, src, '4', 5);
    printf("%s", destination);
}



#include "libmx.h"

void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n) {
    for (size_t i = 0; i < n; i++) {
        ((unsigned char *)dst)[i] = ((const unsigned char *)src)[i];
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

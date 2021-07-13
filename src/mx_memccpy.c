#include "libmx.h" 

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n) {
    // unsigned const char *source = src;
    // unsigned char *dest = dst;
    size_t i = 0;

    for (; i < n; i++) {
        ((unsigned char *)dst)[i] = ((const unsigned char *)src)[i];
        if (((const unsigned char *)src)[i] == c) return dst;
    }     
    return NULL;
}


/*
int main() {
    unsigned char src[25] = "0123456789ABCDEF";
    unsigned char dst[25] = "";
    mx_memccpy(dst, src, '!', 7);
    printf("%s", dst);
}
*/


#include "libmx.h" 

void *mx_memmove(void *dst, const void *src, size_t len) {
    unsigned char *temp = malloc(len);

    mx_memcpy(temp, src, len);
    mx_memcpy(dst, temp, len);
    free(temp);
    return dst;
}

/*
int main() {
    unsigned char src[25] = "0123456789ABCDEF";
    unsigned char destination[25] = "syyyyyyykaxyiiii";
    mx_memcpy(destination, src, 15);
    printf("%s", destination);
}
*/



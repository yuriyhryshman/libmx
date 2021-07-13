#include "libmx.h" 

void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len) {
    const char *haystack = ((const char *) big);
    const char *needle = ((const char *) little);
    for (size_t i = 0; i < big_len; haystack++, i++) {
        if (mx_strncmp(haystack, needle, little_len) == 0) return (void *)(haystack);
    }
    return NULL;
}

/*
int main() {
    char big[12] = "0123456789";
    char little[5] = "567";
    printf("%s", mx_memmem(big, 12, little, 5));
}
*/

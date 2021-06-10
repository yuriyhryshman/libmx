#include "header.h"

int mx_strncmp(const char *str1, const char *str2, size_t n) {
    unsigned long i = 0;
    int k = 0;
    if (n == 0) return 0;
    for (i = 0; str1[i] == str2[0] && i < n; i++) {
        if (str1[i] == '\0' && str2[k] == '\0') return 0;
        k++;
    }
    return (unsigned char) str1[i] - (unsigned char) str2[i];
}



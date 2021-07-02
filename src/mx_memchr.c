#include "header.h"

void *mx_memchr(const void *s, int c, size_t n) {
    const char *result = (const char *) s;
    for (size_t i = 0; i < n; i++) {
        if (result[i] == c)  return (void *) &result[i];
    }
    return NULL;
}

/*
int main() {
    printf("%s", mx_memchr("Trinity", 'M', 7));
}
*/

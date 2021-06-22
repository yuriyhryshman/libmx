#include "header.h"

void *mx_memrchr(const void *s, int c, size_t n) {
    const char *result = (const char *) s;
    for (size_t i = n; i > 0; --i) {
        if (result[i] == c)  return (void *) &result[i];
    }
    return NULL;
}

/*
int main() {
    printf("%s", mx_memrchr("Trinity", 'M', 7));
}
*/

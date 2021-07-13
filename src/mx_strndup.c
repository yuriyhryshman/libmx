#include "libmx.h" 

char *mx_strndup(const char *s1, size_t n) {
    if (s1 == NULL) return NULL;
    char *ndup = mx_strnew(n);
    mx_strncpy(ndup, s1, n);
    return ndup;
}

/*
int main() {
    char *str = mx_strndup("Follow the rabbit", 17);
    printf("%s", str);
}
*/


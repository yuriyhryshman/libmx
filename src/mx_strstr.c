#include "libmx.h" 

char *mx_strstr(const char *haystack, const char *needle) {
    int needle_length = mx_strlen(needle);
    if (needle_length == 0) return ((char *)haystack);
    for (; *haystack; haystack++) {
        if (mx_strncmp(haystack, needle, needle_length) == 0) return (char *)(haystack);
    }
    
    return NULL;
}

/*
int main() {
    char *haystack = "0123456789";
    char *needle = "123";
    printf("%s", mx_strstr(haystack, needle));
}
*/

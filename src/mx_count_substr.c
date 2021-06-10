#include "header.h"

int mx_count_substr(const char *str, const char *sub) {
    int count = 0;

    if (str == NULL || sub == NULL) return -1;
}

int main() {
    char *str = "yo, yo, yo, Neo";
    char *sub = "yo";
    printf("%d", mx_count_substr(str, sub));
}


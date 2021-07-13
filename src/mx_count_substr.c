#include "libmx.h" 

int mx_count_substr(const char *str, const char *sub) {
    int count = 0;

    if (str == NULL || sub == NULL) return -1;
    else {
        int sublen = mx_strlen(sub);
        for (; *str; str++) {
        if (mx_strncmp(str, sub, sublen) == 0) count++; 
            }
    }
    return count;
}

/*
int main() {
    char *str = "yo, yo, yo, Neo";
    char *sub = "yo";
    printf("%d", mx_count_substr(str, sub));
}
*/

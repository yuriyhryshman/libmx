#include "header.h"

int mx_get_substr_index(const char *str, const char *sub) {
    int count = 0;
    if (str == NULL || sub == NULL) return -2;
    
    int sublen = mx_strlen(sub);
    for (; *str; str++, count++) {
        if (mx_strncmp(str, sub, sublen) == 0) return count; 
    }
    return -1;
}


/*
int main() {
    printf("%d", mx_get_substr_index("McDonalds", "Don"));
}
*/

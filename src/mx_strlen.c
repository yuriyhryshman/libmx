#include "header.h"

int mx_strlen(const char *s) {
    int i = 0;
    while (s[i]) {
        i++;
    }
    return i;
}

/*
int main() {
    int a = 0;
    a = mx_strlen("Save the white rabbit");
    printf("%d", a);
}
*/



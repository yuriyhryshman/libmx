#include <stdio.h>

int mx_strlen(const char *s) {
    int i = 0;
    while (s[i] != '\0') {
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



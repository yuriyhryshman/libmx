#include "header.h"


void mx_str_reverse(char *s) {
    int len = mx_strlen(s);
    int k = len - 1;
    char temp;

    for (int i = 0; i < len / 2; i++) {
        temp = s[i];
        s[i] = s[k];
        s[k] = temp;
        k--;    
    }
}

/*
int main() {
    char str[] = "game over";
    mx_str_reverse(str);
    printf("%s\n", str);
}
*/


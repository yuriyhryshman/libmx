#include "header.h"

int mx_get_char_index(const char *str, char c) {
    int i = 0;

    while (str[i] != c) {
        i++;
    }

    return i;
}

int main() {
    char *str = "Follow and the white rabbit";
    char c =  'H';
    printf("%d", mx_get_char_index(str, c));
}

#include "libmx.h" 

int mx_get_char_index(const char *str, char c) {
    int i = 0;

    if (str != NULL) {
        for (; str[i]; i++) {
            if (str[i] == c) return i;
        }
        return -1;
    }
    return -2;
}


/*
int main() {
    char *str = "Follow and the white rabbit";
    char c =  '?';
    printf("%d", mx_get_char_index(str, c));
}
*/

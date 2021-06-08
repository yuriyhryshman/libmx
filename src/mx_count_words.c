#include "header.h"

int mx_count_words(const char *str, char c) {
    int count = 0;
    int k = 0;

    if (!str) {
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] == c) {
                count++;
                k = i;
            }
        }

        if (str[0] != c && str[k+1] != '\0') {
            count *= 2;
        }

        else if (str[0] != c && str[k+1] == '\0') {
            count = (count*2) - 1;
        }

        else count = (count*2) - 2;

        return count;
    }
    return -1;
}

int main() {
    // char *str = " follow * the white rabbit ";
    printf("%d", mx_count_words(NULL, ' '));
}


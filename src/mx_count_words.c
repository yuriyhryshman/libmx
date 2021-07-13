#include "libmx.h" 

int mx_count_words(const char *str, char c) {
    int count = 0;
    int k = 0;

    if (str != NULL) {
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] == c) {
                count++;
                k = i;
            }
        }

        if (str[0] != c && str[k+1] != '\0') {
            count++;
            return count;
        }

        else if ((str[0] != c && str[k+1] == '\0') || (str[0] == c && str[k+1] != '\0')) {
            return count;
        }

        else count--;

        return count;
    }
    else return -1;
}

/*
int main() {
    char *str = " follow * the white rabbit ";
    printf("%d", mx_count_words(str, '*'));
}
*/

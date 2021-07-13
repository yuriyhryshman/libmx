#include "libmx.h" 

char **mx_strsplit(const char *s, char c) {
    if (!s) return NULL;
    int number = mx_count_words(s, c);
    char **arr = malloc(sizeof(char) * number);

    int sublen;
    for (int i = 0; i != number; sublen = 0) {
        int k = 0;
        while (s[k] == c) s++;
        while (s[k++] != c) sublen++;

        arr[i] = mx_strnew(sublen - 1);
        mx_strncmp(arr[i], s, sublen);
        s += sublen;
        i++;
        k = 0;

    }
    return arr;
}

/*
int main() {
    const char *s = "**Good bye,**Mr.*Anderson.****";
    printf("%c\n", **mx_strsplit(s, '*'));
}
*/

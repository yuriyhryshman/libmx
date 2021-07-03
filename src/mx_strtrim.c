#include "header.h"

char *mx_strtrim(const char *str) {
    char *newStr;
    int len;

    if (!str) return NULL;

    for (; mx_isspace(*str); str++) len = mx_strlen(str);

    for (int i = len - 1; mx_isspace(str[i]); i--, len++);

    if (len < 0) {
        newStr = mx_strnew(0);
        return newStr;
    }

    newStr = mx_strnew(len);
    newStr = mx_strncpy(newStr, str, len);
    return newStr;
}

int main() {
    char *name = "My name... is Neo \t\n ";
    printf("%s", mx_strtrim(name));
}


#include "header.h"

char *mx_strtrim(const char *str) {
    int i = 0;
    int strlen = mx_strlen(str);
    
    if (mx_isspace(str[i]) == 0 && mx_isspace(str[strlen]) == 0) return NULL;

    while (mx_isspace(str[strlen] == 1)) {
        strlen--;
    }
    return mx_strndup(str, strlen);
    

    while (mx_isspace(str[i] == 1)) {
        i++;
    }
    return mx_strndup(str, (strlen - i));
    
}

char *mx_strtrim(const char *str){
    int c = 0;
    while (mx_isspace(str[c])) c++;

    char *t = mx_strnew(mx_strlen(str) - c);

    for (int i = 0; i < mx_strlen(str) - c; i++)
        t[i] = str[c + i];

    c = mx_strlen(t) - 1;

    while (mx_isspace(t[c])) c--;

    char *r = mx_strnew(c + 1);

    for (int i = 0; i < c + 1; i++)
        r[i] = t[i];

    mx_strdel(&t);
    
    return r;
}

// int main() {
//     char *name = "\f My name... is Neo \t\n ";
//     printf("%s", mx_strtrim(name));
// }


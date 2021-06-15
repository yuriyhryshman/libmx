#include "header.h"

char *mx_del_extra_spaces(const char *str){
    char *t = mx_strtrim(str);
    int c = 0;
    for (int i = 1; i < mx_strlen(t); i++){
        if (mx_isspace(t[i]) && mx_isspace(t[i - 1]))
            c++;
    }
    char *r = mx_strnew(mx_strlen(t) - c);
    c = 1;
    r[0] = t[0];
    for (int i = 1; i < mx_strlen(t); i++){
        if (!mx_isspace(t[i]) || !mx_isspace(t[i - 1])){
            r[c] = t[i];
            c++;
        }
    }
    return r;
}


// int main(){
//     char *name = "\f  My name      ...      is  Neo    \t \n";
//     printf("%s", name);
//     name = mx_del_extra_whitespaces(name);
//     printf("%s", name);
// }



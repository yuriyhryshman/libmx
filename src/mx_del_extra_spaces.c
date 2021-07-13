#include "libmx.h" 

char *mx_del_extra_spaces(const char *str) {
    char *tempstr = mx_strtrim(str);
    int c = 0;
    int strlen = mx_strlen(tempstr);

    for (int i = 1; i < strlen; i++){
        if (mx_isspace(tempstr[i]) && mx_isspace(tempstr[i - 1]))
            c++;
    }
    char *renowatedStr = mx_strnew(strlen - c);
    c = 1;
    renowatedStr[0] = tempstr[0];
    for (int i = 1; i < strlen; i++){
        if (!mx_isspace(tempstr[i]) || !mx_isspace(tempstr[i - 1])){
            renowatedStr[c] = tempstr[i];
            c++;
        }
    }
    free(tempstr);
    return renowatedStr;
}

/*
int main(){
    char *name = "\f  My name      ...      is  Neo    \t \n";
    printf("%s", mx_del_extra_spaces(name));
}
*/

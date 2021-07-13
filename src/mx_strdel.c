#include "libmx.h" 

void strdel(char **str) {
    if (str && *str){
        free(*str);
        *str = '\0';
    }
}


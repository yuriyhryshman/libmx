#include "header.h"

void strdel(char **str) {
    if (str && *str){
        free(*str);
        *str = '\0';
    }
}


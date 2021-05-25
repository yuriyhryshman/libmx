#include "header.h"
#include <stdio.h>

char *mx_nbr_to_hex(unsigned long nbr) {
    int length = 0;
    int temporary;
    int i = 0;

    while (nbr  / 10 > 1) {
        nbr /= 10;
        length++;
    }

    char *string = mx_strnew(length);

    while (nbr != 0) {
        temporary = nbr % 16;

        if (temporary < 10) string[i] = 48 + temporary;
        if (temporary > 10) string[i] = 97 + temporary;

        nbr /= 16;
        i++;
    }
    mx_str_reverse(string);
    return string;
}

int main() {
    unsigned long nbr[2] = 52; 
    printf("%s", mx_nbr_to_hex(nbr));
}

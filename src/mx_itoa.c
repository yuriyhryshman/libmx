#include "header.h"

char *mx_itoa(int number) {
    int nbr = number;
    int count = 0;

    while (nbr / 10 > 0) {
        nbr /= 10;
        count++;
    }

    char *string = mx_strnew(count);

    if (number == 0) return "0";
    if (number < 0) {
        string[0] = '-';
        number *= -1;
    }

    for (int syka = number; syka != 0; syka /= 10) {
        string[count] = syka % 10 + 48;
        count--;
    }
    
    return string;
}


int main() {
    printf("%s", mx_itoa(-123));
}


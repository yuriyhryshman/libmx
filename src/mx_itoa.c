#include "header.h"

char *mx_itoa(int number) {
    int nbr = 0;
    int count = 0;
    int k = 0;
    bool i = 0;
    
    if (number < 0 && number != -2147483648) {
      number = number * -1;
      count++;
      i = 1;
    }
    
    if (number < 10) count++;

    nbr = number; 
    
    while (nbr / 10 > 0) {
        nbr /= 10;
        count++;
    }

    if (i == 1) count++;

    char *string = mx_strnew(count + 1);

    if (number == 0) return "0";
    if (number == -2147483648) return "-2147483648";

    
    for (; number != 0 && k <= count; number /= 10) {
        string[k] = number % 10 + 48;
        k++;
    }

    if (i == 1) {
        string[k] = '-';
    }


    mx_str_reverse(string);
    return string;
}

/*
int main() {
    printf("%s", mx_itoa(2147483647));
}
*/


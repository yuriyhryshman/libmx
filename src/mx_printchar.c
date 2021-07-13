#include "libmx.h" 

void mx_printchar(char c) {
    write(1, &c, 1);
}

/*
int main () {
    char c = 'V';
    mx_printchar(c);
}
*/

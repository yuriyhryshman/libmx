#include <unistd.h>

void mx_printchar(char c) {
    char s[2];
    s[0] = c;
    s[1] = '\0';
    write(1, s, 1);
}

/*
int main () {
    char c = 'V';
    mx_printchar(c);
}
*/


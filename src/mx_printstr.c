#include "libmx.h" 

void mx_printstr(const char *s) {
    write(1, s, mx_strlen(s));
}

/*
int main() {
    mx_printstr("Hello rabbit");
}
*/

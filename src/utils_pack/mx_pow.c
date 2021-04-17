#include <stdio.h>

double mx_pow(double n, unsigned int pow) {
    if (pow == 0) return 1;
    double a = 1;
    for (int i = 0; i < pow; i++) {
        a *= n;
    }
    return a;
}


/*
int main() {
    printf("%f", mx_pow(2, 0));
}
*/

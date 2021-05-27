#include <stdio.h>

int mx_sqrt(int x) {
    if (x == 1) return 1;
    for (int i = 0; i <= x/2; i++) {
        int a = i;
        if (a*a == x) return a;
    }
    return 0;
}

/*
int main() {
    printf("%d", mx_sqrt(1));
}
*/



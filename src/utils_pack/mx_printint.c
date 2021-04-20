#include <unistd.h>

void mx_printchar(char c);

void mx_printint(int n) {
    if (n >= -2147483648 || n <= 2147483647) {
        if (n == 0) mx_printchar(48);
        int mp = 0;
        if (n < 0) mp = -1;
        else mp = 1;
        n *= mp;
        char arr[11];
        int c = 0;
        while (n != 0) {
            int gg = n % 10;
            n /= 10;
            if ( gg < 0) gg *= - 1;
            arr[c] = 48 + gg;
            c++;
        }
        if(mp < 0) {
            char s = '-';
            mx_printchar(s);
        }
            
        while (c != 0) {
            c--;

            mx_printchar(arr[c]);
        }
    }
}

/*
int main () {
    mx_printint(21477);
}
*/

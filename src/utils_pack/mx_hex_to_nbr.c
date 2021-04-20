#include <stdlib.h>
#include <string.h>
#include <stdio.h>


int mx_strlen(const char *s) {
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}

unsigned long mx_hex_to_nbr(const char *hex) {
    long long length = mx_strlen(hex);
    //printf("%d\n", mx_strlen(hex));
    unsigned long decimal = 0;
    
    for (int i = 0; i < length; i++)
    {
        decimal *= 16;
        if (hex[i] >= '0' && hex[i] <= '9')
        {
            decimal += hex[i] - 48;
        }
        else if (hex[i] >= 'A' && hex[i] <= 'F') 
        {
            decimal += hex[i] - 55;
        }
        else if (hex[i] >= 'a' && hex[i] <= 'f') 
        {
            decimal += hex[i] - 87;
        }
    }
    return decimal;
}  

/*
int main() {
    printf("%lu", mx_hex_to_nbr("ffffffffffff"));
}
*/


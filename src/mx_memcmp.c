#include "libmx.h" 

int mx_memcmp(const void *s1, const void *s2, size_t n) {
    unsigned const char *str1 = s1;
    unsigned const char *str2 = s2;
    unsigned int i = 0;

    if (n == 0) return 0;
    for (i = 0; str1[i] == str2[i] && i < n; i++) {
        if (str1[i] == '\0' && str2[i] == '\0') return 0;
    }
    return str1[i] - str2[i];

}

/*
int main() {
    // unsigned char s1[15]= "123456789F0";
    unsigned char s2[15]= "123456789F0";
    unsigned char s3[15]= "123456789B0";
    // unsigned char s4[15]= "123456789G0";
    // printf("%d\n", mx_memcmp(s1, s2, 11));
    printf("%d\n", mx_memcmp(s2, s3, 0));
    // printf("%d\n", mx_memcmp(s3, s4, 11));
}
*/

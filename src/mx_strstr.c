#include "header.h"

char *mx_strstr(const char *haystack, const char *needle) {
    int k = 0;
    int count = 0;
    int fe = 0;
    // char *str = (char *)haystack;
    // char *needle = (char *)needle;

    if (mx_strlen(needle) == 0) return ((char *)haystack);
    
    
    for (int i = 0; haystack[i]; i++) {
       
        if (needle[k] == haystack[i] && needle[k] != '\0') {
            fe = i;
            count++;
            k++;
        }
    }

    if (count == mx_strlen(needle)) return ((char *)&haystack[fe]);
    
    else return NULL;
}

// int mx_strncmp(const char *s1, const char *s2, int n) {
//     int i = 0;

//     if (n == 0)
//         return 0;
//     for(i = 0; s1[i] == s2[i] && i < n - 1; i++)
//         if (s1[i] == '\0' && s2[i] == '\0')
//             return 0;
//     return (unsigned char) s1[i] - (unsigned char) s2[i];
// }

// char *mx_strstr(const char *haystack, const char *needle) {
//     int needle_len = mx_strlen(needle);

//     if(!needle)
//         return (char *) haystack;
//     for(; *haystack; haystack++)
//         if(mx_strncmp(haystack, needle, needle_len) == 0)
//             return(char *) haystack;
//     return NULL;
// }

int main() {
    char *haystack = "0123456789";
    char *needle = "345";
    printf("%s", mx_strstr(haystack, needle));
}


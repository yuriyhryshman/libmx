#include "header.h"

// char *mx_replace_substr(const char *str, const char *sub, const char *replace) {
//     char *dst;
//     int num;
//     int k = 0;

//     if (!str || !sub || !replace) return NULL;

//     num = mx_count_substr(str, sub);
//     dst = mx_strnew(mx_strlen(str) + ((mx_strlen(replace)) - (mx_strlen(sub))) * num);
//     for (int i = 0; str[k]; ){
//         if (mx_strncmp(&str[k], sub, mx_strlen(sub)) == 0) {
//             mx_strncpy(dst, replace, mx_strlen(replace));
//             i += mx_strlen(replace);
//             k += mx_strlen(sub);
//         }
//         else
//             dst[i++] = str[k++];        
//     }
    
//     return dst;
// }

char *mx_replace_substr(const char *str, const char *sub,
                        const char *replace) {
    char *arrrep = NULL;
    int sub_len;
    int replace_len;
    int i = 0;

    if (!str || !sub || !replace)
        return NULL;
    sub_len = mx_strlen(sub);
    replace_len = mx_strlen(replace);
    i = mx_get_substr_index(str, sub);
    arrrep = mx_strnew(mx_strlen(str) + (sub_len - replace_len) *
    			mx_count_substr(str, sub));
    i = 0;
    while (*str) {
        if (mx_strstr(str, sub) == str) {
            mx_strcpy(&arrrep[i], replace);
            i += sub_len;
            str += replace_len;
        }
        else
            arrrep[i++] = *str++;
    }
    return arrrep;
}

/*
int main() {
    printf("%s", mx_replace_substr("McDonalds", "alds", "uts"));
    printf("\n");
    printf("%s", mx_replace_substr("Ururu turu", "ru", "ta"));
}
*/

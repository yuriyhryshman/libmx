#include "libmx.h" 


void mx_print_strarr(char **arr, const char *delim) {
    if ( arr != NULL && delim != NULL) {
        
        for (int i = 0; arr[i]; i++) {
            mx_printstr(arr[i]);
            
            if (arr[i+1]) mx_printstr(delim);
        }
    }
    mx_printchar('\n');
}

/*
int main() {
    char *print_strarr[5] = {"xyi", "xyz", "ghi", "dif", NULL};
    mx_print_strarr(NULL, NULL);
}
*/

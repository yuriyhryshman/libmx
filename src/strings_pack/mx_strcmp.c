#include <stdio.h>


int mx_strcmp(const char *s1, const char *s2) {
    int max = 0;
    for (int i = 0; s1[i] != '\0' || s2[i] != '\0'; i++) {
        max = s1[i] - s2[i];
        if (max != 0) return max;
    }
    return max;
}

/*
int main(){
   printf("%d",mx_strcmp("zhz", "zhzfbgbf"));
}
*/




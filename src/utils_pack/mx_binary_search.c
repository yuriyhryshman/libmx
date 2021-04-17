#include <stdio.h>

int mx_strcmp(const char *s1, const char *s2) {
    int max = 0;
    for (int i = 0; s1[i] != '\0' && s2[i] != '\0'; i++) {
        max = s1[i] - s2[i];
    }
    return max;
}



int mx_binary_search(char **arr, int size, const char *s, int *count) {
int first = 0;
    int last = size - 1;
    int middle = (first + last) / 2;
    while (first <= last) 
    {
        *count = *count + 1;
        if (mx_strcmp(arr[middle], s) < 0)
            first = middle + 1;
        else if (mx_strcmp(arr[middle], s) == 0)
            return middle;
        else
            last = middle - 1;
        middle = (first + last)/2;
    }
    *count = 0;
    return -1;
}

/*
int main() {
    char *arr[] = {"222", "Abcd", "aBc", "ab", "az", "z"};
    int count = 0;
    printf("%d\n", mx_binary_search(arr, 6, "aBz", &count));
}
*/

#include "libmx.h" 

void mx_foreach(int *arr, int size, void (*f)(int)) {
    for (int i = 0; i < size; i++) {
        f(arr[i]);
    }
}


// int main() {
    
//     // int *xyi = malloc(sizeof(int));
//     // for (int i = 0; i < 5; ++i) {
//     //     xyi[i] = i + 1;
//     // }
//     // mx_foreach(xyi, 5, printf(mx_foreach));
//     int foreach[5] = {1, 2, 3, 4, 5};
//     printf("mx_foreach result is 12345? | "); mx_foreach(foreach, 5, mx_printint);

// }


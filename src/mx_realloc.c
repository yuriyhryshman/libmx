#include "header.h"


void *mx_realloc(void *ptr, size_t size) {
    char *dst = ptr;
    int length = malloc_size(ptr);

    if (size >= 0) {
        if ((int)size != 0 && length > (int)size) return ptr;
        dst = malloc(size);
        if (size != 0 && ptr != 0) {
            dst = mx_memcpy(dst, ptr, size);
        }
        free(ptr);
    }
    return dst;
}

/*
int main() {
    // char *gogi = malloc(5);
    // printf("05_gogi addr: %p, size: %zu\n", (void*)gogi, malloc_size(gogi));
    // gogi  = realloc(gogi, 30);
    // printf("15_gogi addr: %p, size: %zu\n", (void*)gogi, malloc_size(gogi));
    // gogi = realloc(gogi, 3);
    // printf("03_gogi addr: %p, size: %zu\n", (void*)gogi, malloc_size(gogi));

    char *ptr = malloc(sizeof("ebal ya tvoi rot syka"));
    mx_memcpy(ptr, "ebal ya tvoi rot syka", sizeof("ebal ya tvoi rot syka"));
    printf("\n--- bef ---\n %s\taddr: %p \n", ptr, (void*)ptr);
fflush(stdout);
    printf("%s ", mx_realloc(ptr, 25));
   mx_realloc(ptr, 7);
    printf("\n\n--- aft ---\n %s\taddr: %p \n", ptr, (void*)ptr);
fflush(stdout);
    printf("addr aft: %p\n", (void*)ptr);
    
    system("leaks -q a.out");
}
*/


#include "header.h"

char *mx_strjoin(const char *s1, const char *s2) {
    
    if (s1 == NULL && s2 == NULL) return NULL;

    if (s1 == NULL) return mx_strdup(s2);

    if (s2 == NULL) return mx_strdup(s1);

    char join = mx_strcat(s1, s2);

    return join;
}



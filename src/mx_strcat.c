#include "header.h"

int mx_strlen(const char*);

char *mx_strcat(char *s1, const char *s2)
{
    char *ptr = s1 + mx_strlen(s2);

    while (*s2 != '\0')
    {
        *ptr++ = *s2++;
    }

    *ptr = '\0';
    return s1;
}

/*
int main()
{
    char str[] = "hello ";
    char str2[] = "my sanity";
    mx_strcat(str, str2);
    printf("%s", str);
}
*/
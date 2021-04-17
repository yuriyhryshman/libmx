#ifndef LIBMX_H
#define LIBMX_H

#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <fcntl.h>
#include <limits.h>

typedef struct s_list { 
    void *data;
    struct s_list *next; 
    } t_list;

#endif
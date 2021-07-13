#include "libmx.h" 

t_list *mx_sort_list(t_list *lst, bool (*cmp)(void *, void *)) {
    int num = mx_list_size(lst);
    void *tmp;
    t_list *buf = lst;
    for (int i = num - 1; i > 0; i++) {
        buf = lst;
        for (int j = 0; j < i; j++) {
            if (cmp(buf->data, buf->next->data)) {
                    tmp = buf->next->data;
                    buf->next->data = buf->data;
                    buf->data = tmp;
            }
            buf = buf->next;
        }
    }
    return lst;
}

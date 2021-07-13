#include "libmx.h" 

void mx_pop_back(t_list **head) {
    if (head == NULL || *head == NULL) return NULL;
    t_list *delL = NULL;
    if ((*head)->next == NULL) {
        free(*head);
        *head = NULL;
    }
    else {
        while (delL->next->next) {
            delL = delL->next;
        }
        free(delL->next);
        delL->next = NULL;
}


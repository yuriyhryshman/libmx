#include "libmx.h" 

void mx_pop_front(t_list **head) {
    if (head == NULL || *head == NULL) return NULL;
    if ((*head)->next == NULL) {
        free(*head);
        *head = NULL;
    }
    else {
        t_list *delF = NULL;
        delF = (*head)->next;
        free(*head);
        *head = delF;        
    }
}

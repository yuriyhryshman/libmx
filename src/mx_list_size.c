#include "libmx.h" 

int mx_list_size(t_list *list) {
    int count = 0;
    t_list *check = NULL;
    if (list == NULL) return count;
    if (list->next == NULL) return 1;
    else {
        check = list;
        while (check != NULL) {
            check = check->next;
            count++;
        }
    }
    return count;
}

/*
int main() {
    t_list *t = mx_create_node("lol\n");
    mx_push_back(&t, "ku epta\n");
    mx_push_back(&t, "ku epta1\n");
    mx_push_back(&t, "ku epta2\n");
    mx_push_back(&t, "ku epta3\n");
    mx_push_back(&t, "ku epta4\n");
    mx_push_back(&t, "ku epta5\n");
    int i = 0;
    //mx_pop_back(&t);
    printf("%i\n",mx_list_size(t));
    while (t->next != NULL) {
        printf("DATA IS: %s", t->data);
        t = t->next;
        ++i;
    }
}
*/

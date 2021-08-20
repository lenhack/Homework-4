#include "mylib.h"

void ft_lstdel(t_list **alst, void(*del)(void*, size_t)){
    t_list *new = *alst;
    t_list *new2;
    while(new){
        new2 = new->next;
        del(new->content, new->content_size);
        free(new);
        new = new2;
    }
    *alst = NULL;
}
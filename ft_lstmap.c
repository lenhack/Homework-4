#include "mylib.h"

void *ft_lstmap(t_list *lst, t_list*(*f)(t_list *elem)){
    t_list *new;
    t_list *temp;
    if(lst == 0){return NULL;}
    new = ft_lstnew(f(lst)->content, f(lst)->content_size);
    temp = new;
    while(lst->next){
        lst = lst->next;
        new->next = ft_lstnew(f(lst)->content, f(lst)->content_size);
        new = new->next;
    }
    return temp;
}
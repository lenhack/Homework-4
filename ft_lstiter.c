#include "mylib.h"

void ft_lstiter(t_list *lst, void(*f)(t_list *elem)){
    t_list *temp = lst;
    while(temp){
        f(temp);
        temp = temp->next;
    }
}
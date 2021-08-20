#include "mylib.h"

void ft_lstadd(t_list **alst, t_list *new){
    
	t_list	*elem;

	elem = new;
	elem->next = *alst;
	*alst = elem;
}
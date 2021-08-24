#include "mylib.h"

int ft_strnequ(char const *s1, char const *s2, size_t n){
    if(s1 == NULL && s2 == NULL){return 0;}
    if(ft_strlen(s1) == 0 || ft_strlen(s2) == 0){return 0;}
    if(n == 0){return 0;}
    while(*s1 && (*s1 == *s2) && n){        
        s1++;
        s2++;
        n--;
    }
    if((*s1 - *s2) == 0){
        return 1;
    }
    return 0;
}
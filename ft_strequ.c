#include "mylib.h"

int ft_strequ(char const *s1, char const *s2){
    if(s1 == NULL && s2 == NULL){return 0;}
    if(ft_strlen(s1) == 0 || ft_strlen(s2) == 0){return 0;}
    while(*s1 && *s2 && *s1 == *s2){
        s1++;
        s2++;
    }
    if ((*s1 - *s2) == 0){
			return 1;
    }
    return 0;
}
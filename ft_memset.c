#include "mylib.h"

void *ft_memset(void *s, int c, size_t n){
    
    char*s_temp = (char*)s;
    if(s == NULL){
        return NULL;
    }
    while(n > 0){
        *s_temp = c;
        s_temp ++;
        n --;
    }
    return s;
}
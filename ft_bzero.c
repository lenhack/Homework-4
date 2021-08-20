#include "mylib.h"

void ft_bzero(void *s, size_t n){
    char* s_temp = (char*)s;
    while(*s_temp && n > 0){
        *s_temp = 0;
        s_temp ++;
        n --;
    }
}
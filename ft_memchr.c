#include "mylib.h"

void *ft_memchr(const void* s, int c, size_t n){
    char* str = (char*)s;
    char* limit = str + n;    
    while(*str != c && str != limit){
        str++;
    }
    return str;
}
#include "mylib.h"

void* ft_memmove(void* dest, const void* src, size_t n){
    if(dest < src){
        char* d = (char*)dest;
        char* s = (char*)src;
        while(n>0){
            *d = *s;
            d++;
            s++;
            n--;
        }
    }else{
        char* d = (char*)dest + n;
        char* s = (char*)src + n;
        while(n>0){            
            d--;
            s--;
            *d = *s;
            n--;
        }
    }
    return dest;
}
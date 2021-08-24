#include "mylib.h"

void* ft_memmove(void* dest, const void* src, size_t n){
    
    unsigned char* d;
    unsigned char* s;
    if(!dest && !src){return NULL;}
    if(dest < src){
        d = (unsigned char*)dest;
        s = (unsigned char*)src;
        while(n>0){
            *d = *s;
            d++;
            s++;
            n--;
        }
    }else{
        d = (unsigned char*)dest + n;
        s = (unsigned char*)src + n;
        while(n>0){            
            d--;
            s--;
            *d = *s;
            n--;
        }
    }
    return dest;
}

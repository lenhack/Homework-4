#include "mylib.h"

void* ft_memccpy(void* dest, const void* src, int c, size_t n){
    if(dest == NULL) return NULL;
    char*dest_temp = (char*)dest;
    char*src_temp = (char*)src;
    while(n > 0 ){
        if(*src_temp == c){break;}
        *dest_temp = *src_temp;
        dest_temp++;
        src_temp++;
        n--;
    }
    return dest;
}

#include "mylib.h"

void * ft_memcpy(void *dest, const void*src, size_t n){
    if(dest == NULL) return NULL;
    char*dest_temp = (char*)dest;
    char*src_temp = (char*)src;
    while(n > 0 ){
        *dest_temp = *src_temp;
        dest_temp++;
        src_temp++;
        n--;
    }
    return dest;
}
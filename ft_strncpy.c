#include "mylib.h"

char* ft_strncpy(char* dest, const char* src, size_t n){
    char* temp = dest;
    while(n>0){
        *temp = *src;
        temp++;
        src++;
        n--;
    }
    return dest;
}
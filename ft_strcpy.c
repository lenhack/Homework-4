#include "mylib.h"

char* ft_strcpy(char *dest, const char *src){
    char *temp = dest;
    while(*src){
        *temp = *src;
        temp++;
        src++;
    }
    *temp = '\0';
    return dest;
}
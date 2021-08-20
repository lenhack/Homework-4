#include "mylib.h"

char* ft_strnew(size_t size){
    char* nstr = (char*)malloc(size+1);
    while(*nstr){
        *nstr = '\0';
        nstr++;
    }
    return nstr;
}
#include "mylib.h"
// #include <stdio.h>


void ft_memdel(void **ap){
    if(*ap != NULL){
        free(*ap);
        *ap = NULL;
    }
}

// int main(){
//     char* as = malloc(111);
//     ft_memdel((void**)&as);
//     printf("%p\n", as);
//     return 0;
// }
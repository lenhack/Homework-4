#include "mylib.h"

void ft_strdel(char **as){
    if(*as != NULL){
        free(*as);
        *as = NULL;
    }
}

// int main(){
//     char* as = malloc(123);
//     int i = 0;
//     ft_strdel((char**)&as);
//     printf("%p\n", (char**)as);
// }
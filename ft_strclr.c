#include "mylib.h"

void ft_strclr(char *s){
    char* temp = s;
    if(*temp != '\0'){
        int len = ft_strlen(s);
        ft_memset(temp, '\0', len);
    }
}

// int main(){
//     char * s = (char*)malloc(10);
//     strcpy(s, "asdfg");
//     ft_strclr(s);
//     printf("%s\n", s);
//     free(s);    
// }
#include "mylib.h"

size_t ft_strlcat(char* dest, const char* src, size_t size){
    size_t len = 0;
    size_t slen = ft_strlen(src);    

    while(*dest && size > 0){
        dest++;
        len++;
        size--;
    }
    
    while(*src && size > 1){
        *dest = *src;
        dest++;
        src++;
        size--;
    }

    *dest = '\0';
    return (slen + len);
}

// int main(){
//     char* d = "aaa";
//     char* src = "bbbb";
//     size_t size = 5;
//     char* dest = (char*)malloc(strlen(d)+strlen(src));
//     strcpy(dest,d);
//     printf("%lu\n", ft_strlcat(dest, src, size));
//     printf("%s\n", dest);
//     free(dest);
// }
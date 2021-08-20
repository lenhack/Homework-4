#include "mylib.h"

char* ft_strstr(const char* haystack, const char* needle){
    if(haystack == NULL || needle == NULL){
        return NULL;
    }
    
    int len = ft_strlen(needle);

    while(*needle != '\0'){
        if(*haystack == *needle){
            haystack++;
            needle++;
        }else{
            haystack++;
        }
    }
    return (char*)haystack - len;
}

// int main(){
//     char* hay = "abcdefghi";
//     char* n = "def";
//     printf("%s\n", ft_strstr(hay, n));
//     printf("%s\n", strstr(hay, n));
// }
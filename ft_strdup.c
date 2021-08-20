#include "mylib.h"

char *ft_strdup(const char *s){
    int len = ft_strlen(s)+1;
    char *s2 = (char*)malloc(len);
    for(int i = 0; i < len; i++){
        s2[i] = s[i];
    }
    s2[len] = '\0';
    return s2;    
}
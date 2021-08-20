#include "mylib.h"

char* ft_strtrim(char const *s){
    if(s == NULL){return NULL;}
    int len = (int)ft_strlen(s);   
    int i = 0;
    int y = 0;
    while(s[i] == ' ' || s[i] == '\t' || s[i] == '\n'){
        i++;
    }
    int z = len - 1;
    while(s[z] == ' ' || s[z] == '\t' || s[z] =='\n'){        
            z--;
    }
    char* new = (char*)malloc(z - i + 1);
    while(i<=z){
        new[y] = s[i];
        y++;
        i++;
    }
    new[y] = '\0';
    return new;
}

// int main(){
//     char* s = "  \t Hello, Lenka!\t \n";
//     printf("Old string is %s\n", s);
//     char* new =  ft_strtrim(s); 
//     printf("New string is %s\n", ft_strtrim(s));
//     free(new);
// }
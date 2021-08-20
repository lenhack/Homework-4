#include "mylib.h"

char* ft_strjoin(char const *s1, char const *s2){
    if(s1 == NULL || s2 == NULL){
        return NULL;
    }
    char* new = (char*)malloc(ft_strlen(s1)+ ft_strlen(s2)+1);
    int i = 0;
    int y = 0;
    while(s1[i] != '\0'){
        new[i] = s1[i];
        i++;
    }
    while(s2[y] != 0){
        new[i+y] = s2[y];
        y++;
    }
    new[i+y] = '\0';
    return new;
}

// int main(){
//  	char* s1 = "String 1.";
//  	char* s2 = "String 2.";
//  	char *result = ft_strjoin(s1, s2);
//  	printf("The result is %s\n", result);
//  	printf("s1 doesn't change: %s\n", s1);
//  	printf("s2 doesn't change: %s\n", s2);
//  	return 0;
// }
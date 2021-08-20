#include "mylib.h"

int ft_strequ(char const *s1, char const *s2){
    if(s1 == NULL && s2 == NULL){return 0;}
    if(ft_strlen(s1) == 0 || ft_strlen(s2) == 0){return 0;}
    while(s1 && s2){
        if(s1 != s2){return 0;}
        s1++;
        s2++;
    }
        return 1;
}


// int main(){
//  	char* s1 = "String 2.";
//  	char* s2 = "String 2.";
//  	int result = ft_strequ(s1, s2);
//  	printf("The result is %d\n", result);
//  	return 0;
// }
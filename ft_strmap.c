#include "mylib.h"

char* ft_strmap(char const *s, char(*f)(char)){
    if(s == NULL || f == NULL){return NULL;}
    char* new = (char*)malloc(ft_strlen(s)+1);
    int i = 0;
    while(s[i] != 0){
        new[i] = f(s[i]);
        i++;
    }
    new[i] = '\0';
    return new;
}

// char my_func(char str){
//  	printf("My inner function: %c\n", str);
//  	return str - 32;
// }

// int main(){
//  	char* str = "hello.";
//  	printf("The result is %s\n", str);
//  	char *result = ft_strmap(str, my_func);
//      printf("The result is %s\n", result);
//      free(result);
// 	return 0;
// }
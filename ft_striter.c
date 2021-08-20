#include "mylib.h"
#include <string.h>

void ft_striter(char* s, void(*f)(char*)){
    if(s == NULL || f == NULL){
        return;
    }
    while(*s){
        f(s);
        s++;
    }
}
// void my_func(char *str){
//  	printf("My inner function %s\n", str);
// }

// int main(){
//  	char *str = "Hello.";
//  	printf("The result is %s\n", str);
//  	ft_striter(str, my_func);
//  	printf("The result is %s\n", str);
//  	return 0;
// }
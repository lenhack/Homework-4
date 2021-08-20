#include "mylib.h"

void ft_striteri(char *s, void(*f)(unsigned int, char*)){
    if(s == NULL || f == NULL){
        return;
    }
    unsigned int i = 0;
    while(*s){
        f(i, s);
        s++;
        i++;
    }
}

// void my_func(unsigned int i, char *str){
//  	printf("My inner function: index = %d and the string is %s\n", i, str);
// }

// int main(){
//  	char* str = "Hello.";
//  	printf("The result is %s\n", str);
//  	ft_striteri(str, my_func);
//  	printf("The result is %s\n", str);
//  	return 0;
// }
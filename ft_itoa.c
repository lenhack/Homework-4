#include "mylib.h"

char* ft_itoa(int n){
    int t = n;
    int len_num = 0;
    while(t/=10){
        len_num++;
    }
    len_num++;

    char* str = (char*)malloc(len_num +1);
    int i = 0;

    if(n<0){
        str[0] = '-';
        n *= -1;
        i++;
    }

    while(len_num >= i){        
        str[len_num] = (n%10) + '0';
        n/=10;
        len_num--;
    }
    str[ft_strlen(str)] = '\0';
    return str;
}
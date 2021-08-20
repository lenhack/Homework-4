#include "mylib.h"

char* ft_itoa(int n){
    int t = n;
    int len_num = 0;
    while(t/=10){
        len_num++;
    }

    char* str = (char*)malloc(len_num +1);
    int i = 0;

    if(n<0){
        str[0] = '-';
        i++;
    }

    while(len_num >= i){
        if(n>10){
            str[len_num] = ((n%10) + 48);
            n/=10;
        }else{
            str[len_num] = (n + 48);
        }
        len_num--;
    }
    str[ft_strlen(str)] = '\0';
    return str;
}

// int main(){
//     int a = 12345678;    
//     printf("%s\n", ft_itoa(a));
// }
#include "mylib.h"

int ft_memcmp(const void* s1, const void* s2, size_t n){
    char* st1 = (char*)s1;
    char* st2 = (char*)s2;
    int sum1 = 0;
    int sum2 = 0;
    while(n>0){
        sum1 = sum1 + *st1;
        sum2 = sum2 + *st2;
        n--;
        st1++;
        st2++;
    }
    if(sum1 < sum2){return -1;}
    else if(sum1 > sum2){return 1;}
    else{return 0;}
}
#include "mylib.h"

int ft_atoi(const char *nptr){
    if(*nptr == '\0'){
        return 0;
    }

    int rez = 0;
    int ind = 0;
    int sign = 1;

    if(nptr[0] == '-'){
        sign = -1;
        ind++;
    }

    if((nptr[ind])<48 || (nptr[ind])>57){
        return 0;
    }
    while(nptr[ind] != '\0'){
        if((nptr[ind])>47 && (nptr[ind])<58){
            rez = rez * 10 + (nptr[ind] - 48);
        }
        ind++;
    }
    return sign * rez;
}
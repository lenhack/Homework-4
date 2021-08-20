#include "mylib.h"

int ft_strcmp(const char *s1,const char *s2){
	int rez = 0;
	int a = ft_strlen(s1);
	int b = ft_strlen(s2);
	if(a<b){
	    rez = -1;
	}else if(a>b){
	    rez = 1;
	}else{
	    for(int i = 0; i < (int)ft_strlen(s2)+1; i++){
	        rez = s1[i] - s2[i];
	    }
	}
	return rez;
} 
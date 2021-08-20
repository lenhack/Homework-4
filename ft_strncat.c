#include "mylib.h"

char *ft_strncat(char *dest,const char *src, size_t n){
	char * temp = dest;
	while(*temp){
		temp++;
	}
	while(n>0){
		*temp = *src;
		temp++;
		src++;
        n--;
	}
	*temp = '\0';
	return dest;
} 
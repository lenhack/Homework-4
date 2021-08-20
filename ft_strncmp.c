#include "mylib.h"

int ft_strncmp(const char *s1, const char *s2, size_t n){

	if (n == 0)
		return (0);
	while (n != 0){
		if (*s1 != *s2++){            
			return (*(const unsigned char *)s1 -
				*(const unsigned char *)(s2 - 1));                
        }        
		if (*s1++ == 0){
			break;
        }
        n--;
	}
	return (0);
}


// int main(){
//     char* s1 = "aa";
//     char* s2 = "bbbb";
//     size_t n = 3;
//     //printf("%d\n", ft_strncmp(s1, s2, n));
// }
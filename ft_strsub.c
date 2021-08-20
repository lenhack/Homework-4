#include "mylib.h"

char* ft_strsub(char const *s, unsigned int start, size_t len){
	int	i = 0;
	char* str = (char *)malloc(len + 1);
	if(s == NULL || str == NULL){
        return NULL;
    }
	while (i < (int)len){
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return str;
}


// int main(){
//  	char str[20] = "This is string.";
//  	char *result = ft_strsub(str, 8, 7);
//  	printf("The  result is %s\n", result);
//     free(result);
//  	return 0;
// }
#include "mylib.h"

char *ft_strnstr(const char *big, const char *little, size_t len){
	char c, sc;
	size_t s_len;

	if ((c = *little++) != '\0') {
		s_len = ft_strlen(little);
		do {
			do {
				if (len-- < 1 || (sc = *big++) == '\0')
					return (NULL);
			} while (sc != c);
			if (s_len > len)
				return (NULL);
		} while (ft_strncmp(big, little, s_len) != 0);
		big--;
	}
	return ((char *)big);
}

// int main(){
//     char* hay = "abcdefghi";
//     char* lit = "def";
//     size_t len = 7;
//     printf("%s\n", ft_strnstr(hay, lit, len));    
// }
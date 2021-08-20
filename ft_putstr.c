#include "mylib.h"

void ft_putstr(char const *s){
	int	i = 0;
	while (s[i]){
		write(1, &s[i], 1);
		i++;
	}
}

// int main(){
//     char letter[20] = "Life if good.";
//     ft_putstr(letter);
//     return(0);
// }
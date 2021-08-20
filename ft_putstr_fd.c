#include "mylib.h"

void ft_putstr_fd(char const *s, int fd){
    int len = ft_strlen(s);
    write(fd, s, len);
}

// int main(){
//     char *s = "Never give up!";
//     ft_putstr_fd(s, 1);
// }
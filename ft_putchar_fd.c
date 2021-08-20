#include "mylib.h"

void ft_putchar_fd(char c, int fd){
    write(fd, &c, 1);
}

// int main(){
//     char c = 'w';
//     ft_putchar_fd(c, 1);
//     return 0;
// }
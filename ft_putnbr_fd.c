#include "mylib.h"

void ft_putnbr_fd(int n, int fd){
    char*nbr = ft_itoa(n);
    ft_putstr_fd(nbr, fd);
}

// int main(){
//     int n = 1234567890;
//     ft_putnbr_fd(n, 1);
//     return 0;
// }
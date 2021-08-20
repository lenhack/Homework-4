#include "mylib.h"

void ft_putnbr(int n){
    char*nbr = ft_itoa(n);
    ft_putstr(nbr);
}

// int main(){
//     int nbr = 1234567890;
//     ft_putnbr(nbr);
//     return 0;
// }
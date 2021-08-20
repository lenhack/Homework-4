char *ft_strrchr(const char* s, int c){
    int i = 0;
    while(s[i] != 0){
        i++;
    }
    
    char* r = 0;
    while(i != 0){
        if(s[i] == c){
            r = (char*) s + i;
            break;
        }
        i--;
    }

    return r;
}

// int main(){
//     char* s = "always koka-kola";
//     int c = 'o';    
//     printf("%s\n", ft_strrchr(s, c));
// }
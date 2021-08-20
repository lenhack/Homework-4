char *ft_strchr(const char* s, int c){
    while(*s != c && *s != '\0'){
        s++;
    }
    return (char*)s;
}
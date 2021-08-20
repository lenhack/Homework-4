char *ft_strcat(char *dest,const char *src){
	char * temp = dest;
	while(*temp){
		temp++;
	}
	while(*src){
		*temp = *src;
		temp++;
		src++;
	}
	*temp = '\0';
	return dest;
}  
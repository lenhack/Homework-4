#include "mylib.h"
#include <string.h>

int newstrlen(const char*s, char c){
	int i = 0;
	while(s[i] && s[i] != c){
		i++;
	}
	return i;
}

int number_of_words(const char*s, char c){
	int words = 0;
	int y = 0;
	while(s[y] == c){
		y++;
		if(s[y] == '\0'){
			words++;
		}
		while(s[y] != '\0'){
			if(s[y] == c){
				y++;
				words++;
			}
			else{
				y++;
			}
		}
	}
	return words;
}

char** ft_strsplit(const char* s, char c){
	char** all_str;
	char** temp;
	int i = 0;
	int y = 0;
	int z;
	if(s){
		all_str = (char**)malloc(number_of_words(s, c)+1);
		if(all_str == 0){return NULL;}
		temp = all_str;
		while(s[i]){
			while(s[i] == c){
				i++;
			}
			all_str[y] = (char*)malloc(newstrlen(s, c)+1);
			if(all_str[y] == NULL){return NULL;}
			z = 0;
			while(s[i] && s[i] !=c){
				all_str[y][z] = s[i];
				z++;
				i++;
			}
			all_str[y][z] = '\0';
			y++;
			if(s[i]){i++;}
		}
		return temp;
	}
	return NULL;	
}
// int main()
//  {
//  	char* str = "hello fellow   students ";
//     char **result = ft_strsplit(str, ' ');
 	
//  	printf("The result is %s\n", result[0]);
//  	printf("The result is %s\n", result[1]);
//      printf("The result is %s\n", result[2]);
//  	return 0;
//  }
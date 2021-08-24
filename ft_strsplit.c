#include "mylib.h"

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
	while (*s)
	{
		if (y == 1 && *s == c)
			y = 0;
		if (y == 0 && *s != c){
			y = 1;
			words++;
		}
		s++;
	}
	return words;
}

char** ft_strsplit(const char* s, char c){
	char** all_str;
	char** temp;
	int i = 0;
	int y = 0;
	int z;
	int words = number_of_words(s, c);
	if(s){
		all_str = (char**)malloc(words);
		if(all_str == 0){return NULL;}
		temp = all_str;
		while(s[i]&& y<words){
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
		all_str[y] = NULL;
	}
	return temp;
}
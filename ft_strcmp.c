#include "mylib.h"

int ft_strcmp(const char *s1,const char *s2){
	
	while (*s1)
	{
		if (*s1 != *s2)
		{
			return ((unsigned char)*s1 - (unsigned char)*s2);
		}
		s1++;
		s2++;
	}
	if (*s2 == '\0')
		return (0);
	else
		return (-*s2);
} 
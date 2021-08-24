#include "mylib.h"


char* ft_strstr(const char* haystack, const char* needle){
    const char	*ret;
	const char	*temp = needle;;

	if (*needle == '\0'){
		return ((char *)haystack);
    }
	while (*haystack){
		ret = haystack;
		while ((*haystack == *needle) && *needle){
			++haystack;
			++needle;
		}
		if (*needle == '\0'){
			return ((char *)ret);
        }
		needle = temp;
		haystack = ret + 1;
	}
	return (NULL);
}
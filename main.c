#include "./mylib.h"
#include <stdio.h>

char my_toup(char c){
    printf("In the function my_toup (with ft_toupper) %c\n", c);
    c = ft_toupper(c);
 	return c;
}

char my_tolow(unsigned int i, char c){
  	printf("In the function my_tolow (with ft_tolower): index = %d and %c\n", i, c);
    c = ft_tolower(c);
  	return c;
}

void myfunc1(char*str){
    printf("In the my function1 %s.\n", str);
}

void myfunc2(unsigned int i, char *str){
    printf("In the my function2: index = %d and the string is %s\n", i, str);
}

void my_print_list(t_list* lst){
    printf("The content is %s, size = %zu\n", (char*)lst->content, lst->content_size);
}

t_list* my_tolow_lst(t_list*elem){
    printf("The content is %s, size = %d\n", (char*)elem->content, (int)elem->content_size);
    return elem;
}

void ft_memdel_range(void *mem, size_t mem_size){
    if (mem){
        free(mem);
        mem = NULL;
    }
    (void)mem_size;    
}

int main(){
// // Check ft_atoi
//     char* npt = "12345678As";
//     printf("The result of function ft_atoi is %d\n", ft_atoi(npt));
// // Check ft_itoa
//     int ito = 87654321;    
//     printf("The result of function ft_itoa is %s\n", ft_itoa(ito));
// // Chek ft_bzero and ft_strcpy
//     char* start = (char*)malloc(10);
//     ft_strcpy(start, "asdfg");
//     ft_bzero(start, 10);
//     printf("The result of function ft_bzero is %s\n", start);
//     free (start);
// // Check ft_isalnum
//     int a = '7';
//     int b = 'c';
//     int c = ' ';
//     int A = ft_isalnum(a);
//     int B = ft_isalnum(b);
//     int C = ft_isalnum(c);
//     printf("The result of function ft_isalnum:");
//     if(A == 1){printf(" a is number,");}else{printf(" a is not number,");}
//     if(B == 1){printf(" b is number,");}else{printf(" b is not number,");}
//     if(C == 1){printf(" c is number.\n");}else{printf(" c is not number.\n");}  
// // Check ft_isalpha
//     A = ft_isalpha(a);
//     B = ft_isalpha(b);
//     C = ft_isalpha(c);
//     printf("The result of function ft_isalpha:");
//     if(A == 1){printf(" a is alpha,");}else{printf(" a is not alpha,");}
//     if(B == 1){printf(" b is alpha,");}else{printf(" b is not alpha,");}
//     if(C == 1){printf(" c is alpha.\n");}else{printf(" c is not alpha.\n");} 
// // Check ft_isascii
//     A = ft_isascii(a);
//     B = ft_isascii(b);
//     C = ft_isascii(c);
//     printf("The result of function ft_isascii:");
//     if(A == 1){printf(" a is ascii,");}else{printf(" a is not ascii,");}
//     if(B == 1){printf(" b is ascii,");}else{printf(" b is not ascii,");}
//     if(C == 1){printf(" c is ascii.\n");}else{printf(" c is not ascii.\n");}
// // Check ft_isdigit
//     A = ft_isdigit(a);
//     B = ft_isdigit(b);
//     C = ft_isdigit(c);
//     printf("The result of function ft_isdigit:");
//     if(A == 1){printf(" a is digit,");}else{printf(" a is not digit,");}
//     if(B == 1){printf(" b is digit,");}else{printf(" b is not digit,");}
//     if(C == 1){printf(" c is digit.\n");}else{printf(" c is not digit.\n");}
// // Check ft_isprint
//     A = ft_isprint(a);
//     B = ft_isprint(b);
//     C = ft_isprint(c);
//     printf("The result of function ft_isprint:");
//     if(A == 1){printf(" a is print,");}else{printf(" a is not print,");}
//     if(B == 1){printf(" b is print,");}else{printf(" b is not print,");}
//     if(C == 1){printf(" c is print.\n");}else{printf(" c is not print.\n");}
// // Check ft_strlen and ft_memalloc 
//     char* memal = (void*)ft_memalloc(10);
//     int len = ft_strlen(memal);
//     printf("The result of function ft_memalloc is %s and it have %d size\n", memal, len);
//     free(memal);
// // Check ft_memcpy and ft_memdel
//     char *src = "abcdefghijk";
//     char* dest = (char*)malloc(ft_strlen(src)+1);
//     int z = 'e';
//     size_t size = 10;
//     (char*)ft_memccpy(dest, src, z, size);
//     printf("The result of function ft_memccpy is %s\n", dest);
//     ft_memdel((void**)&dest);
//     printf("The result of function ft_memdel is %p.\n", dest);
// // Check ft_memchr
//     char new[11]="1234567890";
//     char *sym = ft_memchr (new, '4', 10);
//     if (sym != NULL){
//         sym[0]='!';
//     }   
//     printf("The result of function ft_memchr is %s\n", new);
// // Check ft_memcmp, ft_strcpy, ft_strclr and ft_strdel
//     char* str1 = "qwedewqr";
//     char* str2 = "qwed";
//     size_t n = 5;
//     printf("The result of function ft_memcmp is %d\n", ft_memcmp(str1, str2, n));
//     char*temp_str1 = ft_strnew(ft_strlen(str1)+1);
//     ft_strcpy(temp_str1, str1);
//     ft_strclr(temp_str1);
//     char*temp_str2 = ft_strnew(ft_strlen(str2)+1);
//     ft_strcpy(temp_str2, str2);
//     ft_strdel((char**)&temp_str2);
//     printf("The result of deleting strings temp_str1 and temp_str2 with functions ft_strclr for temp_str1 is: %s on %p, and ft_strdel for temp_str2 is: %p.\n", temp_str1, (char*)temp_str1, (char**)temp_str2);
// // Check ft_memcpy
//     char* new2 = (char*)malloc(ft_strlen(new));
//     ft_memcpy(new2, new, 7);
//     printf("The resoult of function ft_memcpy is %s\n", new2);
//     free(new2);
// // check ft_memmove
//     char dst[] = "Goodbye my friend";
//  	char hello[] = "Hello my friend";
//  	ft_memmove(dst, hello, 7);
//  	printf("The result of function ft_memmove is: %s\n", dst);
// // Check ft_memset
//     ft_memset(dst, '!', 10);
//     printf("The result of function ft_memset is: %s\n", dst);
// // Check ft_puchar
//     char w = 'w'; 
//     ft_putchar('S');
//     printf(" is the result of function ft_putchar.\n");
// // Check ft_putchar_fd
//     ft_putchar_fd(w, 1);
//     printf(" is the result of function ft_putchar_fd.\n");
// // Check ft_putendl
//     ft_putendl("Never give up!");
//     printf("is the result of function ft_putendl.\n");
// // Check ft_putendl_fd
//     ft_putendl_fd(src, 1);
//     printf("is the result of function ft_putendl_fd.\n");   
// // Check ft_putnbr
//     int nbr = 1234567;
//     ft_putnbr(nbr);
//     printf(" is the result of function ft_putnbr.\n");
// // Check ft_putnbr_fd
//     ft_putnbr_fd(nbr,1);
//     printf(" is the result of function ft_putnbr_fd.\n");
// // Check ft_putstr
//     ft_putstr(hello);
//     printf(" is the result of function ft_putstr.\n");
// // Chek ft_putstr_fd
//     ft_putstr_fd(hello, 1);
//     printf(" is the result of function ft_putstr_fd.\n");
// // Chek ft_strnew, ft_strlen, ft_strcpy, ft_strcat, ft_strstr, ft_strnstr, ft_strchr and ft_strrchr
//     char* never = "never";
//     char* give_up = " give up!";
//     int len_phrase = ft_strlen(never)+ft_strlen(give_up)+1;
//     char* phrase = ft_strnew(len_phrase);
//     printf("The result of function ft_strnew is %s.\n", phrase);
//     ft_strcpy(phrase, never);   
//     printf("The result of function ft_strlen is %d, ft_strcpy and ft_strcat is: %s\n",len_phrase, ft_strcat(phrase,give_up));
//     printf("The result of function ft_strstr is: %s.\n", ft_strstr(phrase, give_up));
//     printf("The result of function ft_strnstr in first 6 symbols is: %s.\n", ft_strnstr(phrase, never, 6));
//     printf("The result of function ft_strchr with char 'e' is: %s.\n", ft_strchr(phrase, 'e'));
//     printf("The result of function ft_strrchr with char 'i' is: %s.\n", ft_strrchr(phrase, 'i'));
//     free(phrase);
// // Check ft_strlcat
//     char*temp_strlcat = (char*)malloc(len_phrase);
//     ft_strcpy(temp_strlcat, never);
//     ft_strlcat(temp_strlcat, give_up, 8);
//     printf("The temp string of function ft_strlcat is %s.\n", temp_strlcat);
// // Check ft_strncat, ft_strcmp and ft_strncmp
//     char*temp_strncat = (char*)malloc(ft_strlen(never)+11);
//     ft_strcpy(temp_strncat, never);
//     ft_strncat(temp_strncat, give_up, 5);
//     printf("The result of function ft_strncat is: %s.\n", temp_strncat);
//     printf("The result of comparison temp_strlcat and temp_strncat (with ft_strcmp) is %d.\n", ft_strcmp(temp_strlcat, temp_strncat));
//     printf("The result of comparison first 6 symbols temp_strlcat and temp_strncat (with strncmp)is %d.\n", ft_strncmp(temp_strlcat, temp_strncat, 6));
//     free(temp_strncat);
//     free(temp_strlcat);
// // Check ft_strmap
//     char* temp_strmap = ft_strmap(never, my_toup);
//     printf("The start string is: %s, the result of function ft_strmap is: %s.\n", never, temp_strmap);    
// // Chek ft_strmapi
//     char* temp_strmapi = ft_strmapi(temp_strmap, my_tolow); 
//     printf("The start string is: %s, the result of function ft_strmapi is: %s.\n", temp_strmap, temp_strmapi);
//     free(temp_strmapi);
//     free(temp_strmap);
// // Check ft_striter
//     char*temp_striter = (char*)malloc(ft_strlen(never)+1);
//     ft_strcpy(temp_striter, never);
//     ft_striter(temp_striter, myfunc1);
//     printf("The result of function ft_striter is %s.\n", temp_striter);
//     free(temp_striter);
// // Check ft_stiteri
//     char*temp_striteri = (char*)malloc(ft_strlen(give_up)+1);
//     ft_strcpy(temp_striteri, give_up);
//     ft_striteri(temp_striteri, myfunc2);    
//     printf("The result of function ft_striteri is %s.\n", temp_striteri);
//     free(temp_striteri);  
// // Check ft_strdup
//     char*temp_strdup = ft_strdup(never);
//     printf("The origing string is: %s. The duplicat string (with ft_strdup) is: %s.\n", never, temp_strdup);
//     free(temp_strdup);
// // Check ft_strjoin
//     char*temp_strjoin = ft_strjoin(never, give_up);
//     printf("The initial strings are %s and %s. The result string of function ft_strjoin is %s.\n", never, give_up, temp_strjoin);
//     free(temp_strjoin);
// // Check ft_strequ
//     char* never2 = (char*)malloc(ft_strlen(never)+1);
//  	int result = ft_strequ(never, never2);
//     if(result == 0){
//         printf("The strings are identical.\n");
//     }else{printf("The strings are not identical.\n");}
// // Check ft_strnequ
//     int nresult = ft_strnequ(never, never2, 4);
//     if(result == 0){
//         printf("The 4 symbols of strings are identical.\n");
//     }else{printf("The 4 symbols of strings are not identical.\n");}
// // Check ft_strsub
//     char* temp_strsub = ft_strsub(hello, 6, 3);
//     printf("The result of function ft_strsub is %s.\n", temp_strsub);
//     free(temp_strsub);
// // Check ft_strtrim
//     char* temp_strtrim = "  \t Hello, Lenka!\t \n";
//     printf("The result of function ft_strtrim is:\n");
//     printf("--Old string is %s\n", temp_strtrim);
//     char* new_strtrim =  ft_strtrim(temp_strtrim); 
//     printf("--New string is %s\n", ft_strtrim(temp_strtrim));
// // Check ft_strsplit
//     char* temp_split= "hello fellow   students ";
//     char **res_split = ft_strsplit(temp_split, ' ');
//     printf("The result of function ft_strsplit is:\n");
//     int it = 0;
//     while(res_split[it] != 0){
//         printf("The result is %s\n", res_split[it]);
//         it++;
//     }	
// Check function lst
    t_list* big_list = (t_list*)malloc(sizeof(t_list));   
    
    char*node1 = "node 1";
    int lenlst1 = ft_strlen(node1)+1;
    t_list* my_list1 = ft_lstnew(node1, lenlst1);    
    ft_lstadd(&big_list, my_list1);   
    
    char* node2 = "node 2";
    int lenlst2 = ft_strlen(node2)+1;
    t_list* my_list2 = ft_lstnew(node2, lenlst2);
    ft_lstadd(&big_list, my_list2);        
    ft_lstiter(big_list, my_print_list);
    ft_lstmap(big_list, my_tolow_lst);
    // ft_lstdelone(&my_list1, ft_memdel_range);
    // ft_lstiter(big_list, my_print_list);
    ft_lstdel(&big_list, ft_memdel_range);
    ft_lstiter(big_list, my_print_list);
               
 }
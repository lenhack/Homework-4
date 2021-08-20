#include "mylib.h"

void* ft_memalloc(size_t size){
    char* temp = (char*)malloc(size);
    for(int i = (int)size; i >= 0; i--){
        temp[i] = '0';
    }
    return temp;
}
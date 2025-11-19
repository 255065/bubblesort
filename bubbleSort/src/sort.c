#include "sort.h"
#include <ctype.h>

void swap(char *a, char *b){
    char par1 = *a;
    *a = *b;
    *b = par1;

}
   

bool letters_in_order(char a, char b){
    return tolower(a) <= tolower(b);
}

bool numbers_in_ascending_order(char a, char b){
    return a <= b;
}
    

void bubble_sort(char arr[], size_t size, bool (*pair_is_in_order)(char a, char b)){
    for (size_t i = 0; i < size - 1; i++) {
        for (size_t j = 0; j < size - i - 1; j++) {
            if (!pair_is_in_order(arr[j], arr[j + 1])) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}
    

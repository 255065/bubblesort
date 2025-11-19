#include <stdio.h>
#include "sort.h"


int main(void) {
 char letter_arr1[] = {'z', 'S', 's', 'a'};
    size_t letter_count = sizeof(letter_arr1) / sizeof(letter_arr1[0]);

    char number_arr1[] = {4, -1, 2, 9};
    size_t number_count = sizeof(number_arr1) / sizeof(number_arr1[0]);

    bubble_sort(letter_arr1, letter_count, letters_in_order);
    bubble_sort(number_arr1, number_count, numbers_in_ascending_order);

    /* print results */
    printf("Letters sorted: ");
    for (size_t i = 0; i < letter_count; i++) {
        putchar(letter_arr1[i]);
    }
    putchar('\n');

    printf("Numbers sorted: ");
    for (size_t i = 0; i < number_count; i++) {
        if (i) printf(", ");
        printf("%d", number_arr1[i]);
    }
    putchar('\n');

    return 0;
}



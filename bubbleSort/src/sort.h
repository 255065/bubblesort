#ifndef SORT_H
#define SORT_H
#include <stdbool.h>
#include <stddef.h>
#include "sort.h"
#include <ctype.h>  // til bogstaver uden case
#include <stdio.h>  // hvis du vil teste undervejs
#include <ctype.h>



void swap(char *a, char *b);
bool letters_in_order(char a, char b);
bool numbers_in_ascending_order(char a, char b);
void bubble_sort(char arr[], size_t size, bool (*pair_is_in_order)(char a, char b));





#endif

//
// Created by noush on 1/4/2023.
//
#include "swap.h"

void swap(int *a, int *b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
}
#include<stdio.h>

void swap(int *a, int *b){
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void select_sort(int arr[],int n){
    for (int i = 0; i < n-1; i++){
        int min;
        min = arr[i];
        if(arr[i+1] < min);
            swap(&arr[i+1],&min);
    }
}
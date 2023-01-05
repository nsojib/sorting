//
// Created by noush on 1/4/2023.
//
#include <iostream>
#include "swap.h"
#include "quick.h"
using namespace std;

/*
 * put the smaller to the left side
 * put the pivot in the correct position
 * return the correct position.
 */
int partition(int *arr, int li, int ri){
    int pi=ri;  //assume pivot is the last
    int pivot=arr[pi];

    int smallar_i = li-1; //left of the lower index

    for(int i=li;i<=ri-1; i++){
        if(arr[i]<pivot){
            ++smallar_i;
            swap(&arr[i], &arr[smallar_i]);
        }
    }
    int correct_pos=smallar_i+1;
    swap(&arr[correct_pos], &arr[ri]);
    return correct_pos;
}

/*
 * pi: index of pivot
 * li: left index
 * ri: right index
 */
void quick_sort(int* arr, int li, int ri){
    if(li>ri){
        return;
    }
    int correct_pos = partition(arr, li, ri);

    quick_sort(arr, li, correct_pos-1);
    quick_sort(arr, correct_pos+1, ri);


}

/*
 * small test
 */
//int main() {
//    cout << "small test:" << endl;
//    int arr[] ={38, 27, 43, 3, 9, 82, 10};
//    int N = sizeof(arr) / sizeof(arr[0]);
//
//    quick_sort(arr, 0, N-1);
//
//    cout<<"out:";
//    for(int i=0;i<N;i++){
//        cout<<arr[i]<<" ";
//    }
//    cout<<endl;
//}

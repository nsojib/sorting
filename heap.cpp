//
// Created by noush on 1/4/2023.
//
#include <iostream>
#include "heap.h"
#include "swap.h"
using namespace std;

void heapify(int* arr, int pi, int n){
    /*
     * start from pi, put the root as the largest.
     */
    //pi: parent(root) index

    int li=2*pi+1;    //0 based index
    int ri=2*pi+2;

    int max_i = pi; //assume parent is the largest
    if(li < n && arr[li] > arr[max_i]) {
        max_i = li;
    }
    if(ri< n && arr[ri] > arr[max_i]) {
        max_i = ri;
    }
    if(pi!=max_i) {
        swap(&arr[pi], &arr[max_i]);
        heapify(arr, max_i, n);
    }
}

void build_heap(int *arr, int n){
    /*
     * first time
     */
    for(int i=n/2-1;i>=0;i--){      //why n/2-1???  TODO: find
        heapify(arr, i, n);   //bottom up heapify.
    }
}
void heap_sort(int *arr, int n){
    build_heap(arr, n);

    for(int i=n;i>=0;i--){
        swap(&arr[0], &arr[i]);
        heapify(arr, 0, i);          //make the root correct.
    }

}

/*
 * small test
 */
//int main() {
//    cout << "small test:" << endl;
//    int arr[] ={38, 27, 43, 3, 9, 82, 10};
//    int N = sizeof(arr) / sizeof(arr[0]);
//
//    heap_sort(arr, N);
//
//    cout<<"out:";
//    for(int i=0;i<N;i++){
//        cout<<arr[i]<<" ";
//    }
//    cout<<endl;
//}

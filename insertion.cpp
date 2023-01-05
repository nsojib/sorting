//
// Created by noush on 1/3/2023.
//
#include "swap.h"
#include "insertion.h"
#include<iostream>
using namespace std;


void insertion_sort(int *arr, int n){

    for(int i=1;i<n;i++){  //start with the 2nd element (assume 0th element is sorted)
        int key=arr[i];
        int j=i-1;
        while(j>=0 && key<arr[j]) {
             arr[j+1] = arr[j];             //shift item to the right.
             j=j-1;
        }
        arr[j+1]=key;
    }
    return;
}
/*
 * small test
 */
//int main() {
//    cout << "small test:" << endl;
//    int arr[] ={38, 27, 43, 3, 9, 82, 10};
//    int N = sizeof(arr) / sizeof(arr[0]);
//
//    insertion_sort(arr, N);
//
//    cout<<"out:";
//    for(int i=0;i<N;i++){
//        cout<<arr[i]<<" ";
//    }
//    cout<<endl;
//}
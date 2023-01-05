
//
// Created by noush on 1/3/2023.
//

#include "bubble.h"
#include "swap.h"

#include<iostream>
using namespace std;

/*
 * swap each pair
 */
void bubble_sort(int *arr, int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
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
//    bubble_sort(arr, N);
//
//    cout<<"out:";
//    for(int i=0;i<N;i++){
//        cout<<arr[i]<<" ";
//    }
//    cout<<endl;
//}
//
// Created by noush on 1/3/2023.
//
#include "swap.h"
#include "selection.h"
#include<iostream>
using namespace std;

void selection_sort(int *arr, int n){

    for(int i=0;i<n-1;i++){

        int mini=i;   //index of the minimum number

        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        swap(&arr[i], &arr[mini]);

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
//    selection_sort(arr, N);
//
//    cout<<"out:";
//    for(int i=0;i<N;i++){
//        cout<<arr[i]<<" ";
//    }
//    cout<<endl;
//}
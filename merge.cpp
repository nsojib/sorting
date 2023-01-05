//
// Created by noush on 1/4/2023.
//
#include "merge.h"
#include<iostream>
using namespace std;

/*
 * li: left index
 * mi: mid index
 * ri: right index
 */
int* merge(int *arr, int li, int mi, int ri){  // 0 2 5

    int nl=mi - li +1;
    int nr=ri-mi;
    int *arr_left=new int[nl];
    int *arr_right=new int[nr];
    for(int i=0;i<nl;i++){
        arr_left[i]=arr[li+i];        //copying to left subarry
    }
    for(int i=0;i<nr;i++){
        arr_right[i]=arr[mi+1+i];      //copying to right subarray
    }


    //now merging
    int i=li; //main track
    int last_i = ri;

    li=0;  //left subarray i track
    ri=0;  //right subarray i track


    while(i<=last_i){
        if(li==nl){                         //reached to left array end
            arr[i++] = arr_right[ri++];     //take from right and increase the right tracker
        }else if(ri==nr){                   //reached to right array end
            arr[i++] = arr_left[li++];      //take from left and increase the left tracker
        }else{
            if(arr_left[li] <= arr_right[ri]){    //take the smallest
                arr[i++] = arr_left[li++];
            }else{
                arr[i++] = arr_right[ri++];
            }
        }
    }


    delete [] arr_left;
    delete [] arr_right;
}

/*
 * li: left index
 * ri: right index
 */
void merge_sort(int *arr, int li, int ri){
    if(li>=ri){
        return;
    }

    int mi = li + (ri - li)/2;
    merge_sort(arr, li, mi);
    merge_sort(arr, mi+1, ri);
    merge(arr, li, mi, ri);
}

/*
 * small test
 */
//int main() {
//    cout << "small test:" << endl;
//    int arr[] ={38, 27, 43, 3, 9, 82, 10};
//    int N = sizeof(arr) / sizeof(arr[0]);
//
//    merge_sort(arr, 0, N-1);
//
//    cout<<"out:";
//    for(int i=0;i<N;i++){
//        cout<<arr[i]<<" ";
//    }
//    cout<<endl;
//}